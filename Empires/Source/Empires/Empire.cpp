// Fill out your copyright notice in the Description page of Project Settings.


#include "Empire.h"
//#include "OrbitObject.h"
#include "BlackHole.h"
#include "Star.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"

// Sets default values
AEmpire::AEmpire()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEmpire::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<ABlackHole> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Idk what but i damn sure found SOMETHING..."));


		m_GalaxyCore = Cast<ABlackHole>(*ActorItr);
		if (m_GalaxyCore != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Blackhole found!"));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("BLACKHOLE COULD NOT BE FOUND!"));
			return;
		}
	}

	// Pick a random star as homeworld (maybe check if its been claimed by other emps)
	m_HomeSystem = &m_GalaxyCore->GetStarRefAtIndex(FMath::RandRange(0, m_GalaxyCore->GetStarNumber()));

}

// Called every frame
void AEmpire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawDebugLine(GetWorld(), m_HomeSystem->GetActorLocation(), this->GetActorLocation(), FColor().Purple);

}

