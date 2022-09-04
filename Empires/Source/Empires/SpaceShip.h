#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpaceShip.generated.h"

UCLASS()
class EMPIRES_API ASpaceShip : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpaceShip();
	virtual void Tick(float DeltaTime) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	// Needs all stars to determine most efficient route.
	// 
};
