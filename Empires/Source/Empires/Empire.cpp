#include "Empire.h"
#include "BlackHole.h"
#include "Star.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

AEmpire::AEmpire()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEmpire::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<ABlackHole> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
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

	int homeworldIndex = FMath::RandRange(0, m_GalaxyCore->GetStarNumber());

	// Pick a random star as homeworld (maybe check if its been claimed by other civs)
	m_HomeWorld = &m_GalaxyCore->GetStarRefAtIndex(homeworldIndex);
	if (m_HomeWorld->ClaimStar(m_EmpireIndex))
	{
		AddStar(m_HomeWorld);
	}
	AddShip(homeworldIndex);
}

void AEmpire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Just as indication of where the homeworld is in-editor
	DrawDebugLine(GetWorld(), m_HomeWorld->GetActorLocation(), this->GetActorLocation(), m_EmpireColor);

}

void AEmpire::AddShip(const int& a_Index)
{
	// add ship at index of star
	//AActor* star = GetWorld()->SpawnActorDeferred<AActor>(m_CelestialObj, trans, this);


	FTransform trans; 
	trans.SetLocation(m_HomeWorld->GetActorLocation());
	AActor* ship = GetWorld()->SpawnActorDeferred<AActor>(m_Ship, trans, this);

	// do stuff with ship

	UGameplayStatics::FinishSpawningActor(ship, trans);
}

void AEmpire::AddStar(AStar* a_Star)
{
	// add claimed star index to the array, and record index of that star in index array
	m_OwnedStars.Add(a_Star->m_StarIndex, a_Star);
}

