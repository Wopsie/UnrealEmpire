// Fill out your copyright notice in the Description page of Project Settings.


#include "BlackHole.h"
#include "Star.h"

void ABlackHole::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Backhole begin play"));

	//m_Stars.Init(AStar*, m_StarNumber);

	GenerateOrbiters(m_StarNumber, m_GalaxySize);
}

const TArray<AStar*>& ABlackHole::GetStars() const
{
	return m_Stars;
}

const AStar& ABlackHole::GetStarAtIndex(const int& a_Index) const
{
	if (m_Stars.IsValidIndex(a_Index))
	{
		return *m_Stars[a_Index];
	}
	
	UE_LOG(LogTemp, Error, TEXT("Get Star out of range!"));
	return *m_Stars[a_Index];	//Explode
}

AStar& ABlackHole::GetStarRefAtIndex(const int& a_Index)
{
	if (m_Stars.IsValidIndex(a_Index))
	{
		return *m_Stars[a_Index];
	}

	UE_LOG(LogTemp, Error, TEXT("Get Star out of range!"));
	return *m_Stars[a_Index];

}

const int ABlackHole::GetStarNumber() const
{
	return m_Stars.Num();
}

//spawn spiral shape, on planets spawn regular elipse shape
void ABlackHole::GenerateOrbiters(int a_Number, float a_Size)	//could add a_MinDist to put at 0.3
{
	const FRotator rot = GetActorRotation();

	const int numArms = 5;
	const float armSeparationDist = 2 * PI / numArms;
	const float armOffsetMax = 0.5f;
	const float rotFactor = 0.00003;

	int adjustedStars = 0;

	for (int i = 0; i < a_Number; i++)
	{
		// 0-1 domain
		float dist = FMath::FRand();
		dist = FMath::Pow(dist, 1.1);
		float angle = FMath::FRand() * 2 * PI;
		float armOffset = FMath::FRand() * armOffsetMax;
		armOffset = armOffset - armOffsetMax / 2;
		armOffset = armOffset * (1 / dist);

		// transform to galaxy size
		dist = dist * a_Size;
		if (dist < (a_Size * m_MinDist))
		{
			//dist *= a_Size * m_MinDist;
			//dist *= 10; //can do 2
			dist += (a_Size * m_MinDist);
			adjustedStars++;
		}


		float squaredArmOffset = FMath::Pow(armOffset, 2);
		if (armOffset < 0)
			squaredArmOffset *= -1;
		armOffset = squaredArmOffset;

		float rotation = dist * rotFactor;

		angle = (int)(angle / armSeparationDist) * armSeparationDist + armOffset + rotation;
		//angle = (int)(angle / (armSeparationDist * dist)) * (armSeparationDist * dist) + (armOffset * dist);
		
		
		//angle = (int)(angle / armSeparationDist) * armSeparationDist + armOffset + rotation;


		FVector loc;
		loc.X = (FMath::Cos(angle) * dist);
		loc.Y = (FMath::Sin(angle) * dist);
		loc.Z = GetActorLocation().Z;	// silly vertical Z axis
		AActor* star = GetWorld()->SpawnActor<AActor>(m_CelestialObj, loc, rot);

		star->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);

		m_Stars.Emplace(Cast<AStar>(star));
		Cast<AStar>(star)->m_StarIndex = i;
	}

	UE_LOG(LogTemp, Warning, TEXT("Manually adjusted: %d stars"), adjustedStars);

	return;
}