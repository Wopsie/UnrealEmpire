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
	//UE_LOG(LogTemp, Warning, TEXT("Called Generate Orbiters on sub"));
	const FRotator rot = GetActorRotation();

	for (int i = 0; i < a_Number; i++)
	{
		float dist = FMath::FRandRange(a_Size * m_MinDist, a_Size);
		float angle = FMath::FRandRange(0.0f, 2 * PI);

		FVector loc;
		loc.X = (FMath::Cos(angle) * dist) + i * 0.2f;
		loc.Y = (FMath::Sin(angle) * dist) + i * 0.2f;
		loc.Z = GetActorLocation().Z;	// silly vertical Z axis
		AActor* star = GetWorld()->SpawnActor<AActor>(m_CelestialObj, loc, rot);

		star->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);

		m_Stars.Emplace(Cast<AStar>(star));
		Cast<AStar>(star)->m_StarIndex = i;
	}
	return;
}