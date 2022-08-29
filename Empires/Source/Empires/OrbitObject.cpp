#include "OrbitObject.h"

// Sets default values
AOrbitObject::AOrbitObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOrbitObject::BeginPlay()
{
	Super::BeginPlay();
	//Run solar system spawning 
}

// Called every frame
void AOrbitObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Probably rotate? 

	
}

void AOrbitObject::GenerateOrbiters(int a_Number, float a_Size)
{
	UE_LOG(LogTemp, Warning, TEXT("Called Generate Orbiters on base"));
	return;
}

