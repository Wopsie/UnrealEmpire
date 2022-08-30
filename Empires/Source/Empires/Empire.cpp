#include "Empire.h"
#include "BlackHole.h"
#include "Star.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"

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

	// Pick a random star as homeworld (maybe check if its been claimed by other civs)
	m_HomeSystem = &m_GalaxyCore->GetStarRefAtIndex(FMath::RandRange(0, m_GalaxyCore->GetStarNumber()));

}

void AEmpire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Just as indication of where the homeworld is in-editor
	DrawDebugLine(GetWorld(), m_HomeSystem->GetActorLocation(), this->GetActorLocation(), m_EmpireColor);

}

