#include "SpaceShip.h"
#include "Star.h"

ASpaceShip::ASpaceShip()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ASpaceShip::BeginPlay()
{
	Super::BeginPlay();
	
	for (AStar* star : *m_Stars)
	{
		float delta = FVector::Dist(star->GetActorLocation(), FVector::ZeroVector);
		UE_LOG(LogTemp, Warning, TEXT("Logging distance at index: %d Distance : %f"), star->GetIndex(), delta);
		// collection of stars is unordered
	}

	int32 thatInt = 4;

	m_OnPlanetReached.Broadcast(thatInt);
}

void ASpaceShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

