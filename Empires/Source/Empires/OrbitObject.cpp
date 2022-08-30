#include "OrbitObject.h"

AOrbitObject::AOrbitObject()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AOrbitObject::BeginPlay()
{
	Super::BeginPlay();
}

void AOrbitObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Probably rotate? 
}

// spawn spiral shape on blackhole, on planets spawn regular elipse shape
void AOrbitObject::GenerateOrbiters(int a_Number, float a_Size)
{
	// Not pure virtual because Planets dont currently spawn moons
	UE_LOG(LogTemp, Warning, TEXT("Called Generate Orbiters on base"));
	return;
}

