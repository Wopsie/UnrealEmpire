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
	
	for (AActor* planet : m_Planets)
	{
		DrawDebugLine(GetWorld(), planet->GetActorLocation(), this->GetActorLocation(), FColor().Red);
	}
}

void AStar::GenerateOrbiters(int a_Number, float a_Size)
{
	const FRotator rot = GetActorRotation();
	const FVector scale = FVector(0.1, 0.1, 0.1);

	for (int i = 0; i < a_Number; i++)
	{
		float dist = FMath::FRandRange(a_Size * 0.3, 1.0f * a_Size);
		float angle = FMath::FRandRange(0.0f, 2 * PI);

		FVector loc;
		loc.X = FMath::Cos(angle) * dist;
		loc.Y = FMath::Sin(angle) * dist;
		loc.Z = 0.0f;	// silly vertical Z axis
		//loc.Z = GetActorLocation().Z;	// silly vertical Z axis

		loc += this->GetActorLocation();
		AActor* planet = GetWorld()->SpawnActor<AActor>(m_CelestialObj, loc, rot);

		planet->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
		planet->SetActorScale3D(scale);

		m_Planets.Emplace(planet);
	}
}