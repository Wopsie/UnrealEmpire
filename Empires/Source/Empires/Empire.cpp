#include "Empire.h"
#include "BlackHole.h"
#include "Star.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "SpaceShip.h"

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
	if (!m_OwnedStars.Contains(a_Index))
	{
		UE_LOG(LogTemp, Warning, TEXT("Requested star not found"));
		return;
	}

	FTransform trans; 
	trans.SetLocation(m_OwnedStars[a_Index]->GetActorLocation());
	AActor* ship = GetWorld()->SpawnActorDeferred<AActor>(m_Ship, trans, this);

	Cast<ASpaceShip>(ship)->AgregateStars(m_GalaxyCore->GetStars());
	Cast<ASpaceShip>(ship)->SetOwner(m_EmpireIndex, m_HomeWorld->GetIndex());
	Cast<ASpaceShip>(ship)->m_OnPlanetReached.AddDynamic(this, &AEmpire::StartClaim);

	UGameplayStatics::FinishSpawningActor(ship, trans);
}

void AEmpire::AddStar(AStar* a_Star)
{
	m_OwnedStars.Add(a_Star->GetIndex(), a_Star);
}

void AEmpire::StartClaim(int32 a_ReachedStarIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("Received callback from spaceship at planet index: %d"), a_ReachedStarIndex);
	int numPlanets = m_GalaxyCore->GetStarAtIndex(a_ReachedStarIndex).GetPlanetNum();

	// delay ship departure for next star with amount of seconds that star has planets

}

