#include "BlackHole.h"
#include "Star.h"
#include "Kismet/GameplayStatics.h"

void ABlackHole::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Backhole begin play"));

	GenerateOrbiters(m_StarNumber, m_GalaxySize);
}

TArray<AStar*>* const ABlackHole::GetStars() const
{
	return m_ConstPStars;
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
	return *m_Stars[a_Index];	//Explode

}

const int ABlackHole::GetStarNumber() const
{
	return m_Stars.Num();
}


void ABlackHole::GenerateOrbiters(int a_Number, float a_Size)
{
	const FRotator rot = GetActorRotation();
	const FRandomStream seed = 10;


	const int numArms = 5;
	const float armSeparationDist = 2 * PI / numArms;
	const float armOffsetMax = 0.5f;
	const float rotFactor = 5;

	//int adjustedStars = 0;

	for (int i = 0; i < a_Number; i++)
	{
		// 0-1 domain
		float dist = seed.FRand();
		dist = FMath::Pow(dist, 1.1);
		float angle = seed.FRand() * 2 * PI;
		float armOffset = seed.FRand() * armOffsetMax;
		armOffset = armOffset - armOffsetMax / 2;
		armOffset = armOffset * (1 / dist);

		float rotation = dist * rotFactor;

		// transform to galaxy domain
		dist = dist * a_Size;
		if (dist < (a_Size * m_MinDist))
		{
			dist += (a_Size * m_MinDist);
			//adjustedStars++;
		}


		float squaredArmOffset = FMath::Pow(armOffset, 2);
		if (armOffset < 0)
			squaredArmOffset *= -1;
		armOffset = squaredArmOffset;


		angle = (int)(angle / armSeparationDist) * armSeparationDist + armOffset + rotation;

		FVector loc;
		loc.X = (FMath::Cos(angle) * dist);
		loc.Y = (FMath::Sin(angle) * dist);
		loc.Z = GetActorLocation().Z;	// silly vertical Z axis

		FTransform trans;
		trans.SetLocation(loc);
		trans.SetRotation(rot.Quaternion());

		float scaleComp = (seed.FRandRange(0.05, 0.35));
		trans.SetScale3D(FVector(scaleComp, scaleComp, scaleComp));

		AActor* star = GetWorld()->SpawnActorDeferred<AActor>(m_CelestialObj, trans, this);
		m_Stars.Emplace(Cast<AStar>(star));
		Cast<AStar>(star)->SetIndex(i);
		UGameplayStatics::FinishSpawningActor(star, trans);
		star->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);

	}

	//UE_LOG(LogTemp, Warning, TEXT("Manually adjusted: %d stars"), adjustedStars);

	return;
}