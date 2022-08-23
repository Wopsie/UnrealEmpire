// Fill out your copyright notice in the Description page of Project Settings.


//#include "Actors/GalaxyGenerator.h"
#include "GalaxyGenerator.h"

// Sets default values
AGalaxyGenerator::AGalaxyGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGalaxyGenerator::BeginPlay()
{
	Super::BeginPlay();

	const FVector loc = GetActorLocation();
	const FRotator rot = GetActorRotation();

	GetWorld()->SpawnActor<AActor>(StarObj, loc, rot);
}

