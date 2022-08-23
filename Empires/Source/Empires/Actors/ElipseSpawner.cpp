// Fill out your copyright notice in the Description page of Project Settings.


#include "ElipseSpawner.h"

// Sets default values for this component's properties
UElipseSpawner::UElipseSpawner()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UElipseSpawner::BeginPlay()
{
	Super::BeginPlay();

	//const FVector loc = GetOwner()->GetActorLocation();
	const FRotator rot = GetOwner()->GetActorRotation();


	for (int i = 0; i < elipseEntities; i++)
	{
		float dist = FMath::FRandRange(elipseSize * 0.1, 1.0f * elipseSize);
		float angle = FMath::FRandRange(0.0f, 2 * PI);

		FVector loc; 
		loc.X = FMath::Cos(angle) * dist;
		loc.Y = FMath::Sin(angle) * dist;
		loc.Z = GetOwner()->GetActorLocation().Z;	// silly vertical Z axis
		GetWorld()->SpawnActor<AActor>(CelestialObj, loc, rot);
	}

}


