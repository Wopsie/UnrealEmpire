// Fill out your copyright notice in the Description page of Project Settings.


#include "Star.h"
#include "Components/LineBatchComponent.h"
#include "DrawDebugHelpers.h"

void AStar::BeginPlay()
{
	Super::BeginPlay();
	GenerateOrbiters(FMath::RandRange(1, 3), m_SystemSize);
}

void AStar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	DrawDebugPoint(GetWorld(), GetActorLocation(), 4, FColor().Red);

}

bool AStar::ClaimStar(unsigned int a_NewOwner)
{
	m_Owner = a_NewOwner;
	// Maybe adjust color or something
	return true;
}

void AStar::GenerateOrbiters(int a_Number, float a_Size)
{
	const FRotator rot = GetActorRotation();
	FRandomStream seed = m_StarIndex;

	for (int i = 0; i < a_Number; i++)
	{
		float dist = seed.FRand();
		float angle = seed.FRand() * 2 * PI;

		dist = dist * a_Size;
		if (dist < (a_Size * m_MinDist))
		{
			dist += (a_Size * m_MinDist);
		}

		FVector loc;
		loc.X = FMath::Cos(angle) * dist;
		loc.Y = FMath::Sin(angle) * dist;
		loc.Z = 0.0f;	// silly vertical Z axis

		loc += this->GetActorLocation();
		AActor* planet = GetWorld()->SpawnActor<AActor>(m_CelestialObj, loc, rot);

		planet->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
		planet->SetActorScale3D(GetActorScale3D() * 0.2);

		m_Planets.Emplace(planet);
	}
}