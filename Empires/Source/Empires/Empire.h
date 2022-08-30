// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Empire.generated.h"

class AOrbitObject;
class ABlackHole;
class AStar;

UCLASS()
class EMPIRES_API AEmpire : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEmpire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// For adding a colonization ship
	void AddShip();
	// For beginning the claiming process of a solar system. The more planets, the slower
	void StartClaim();
	// For picking a star, whether that be to spawn on or to add to colonization ship route
	void Pick();
	
	void PickRandom();

	// The star system this empire spawn on
	AStar* m_HomeSystem;

	// All ships this empire has control over
	TArray<AActor*> m_Fleet;
	// All stars this empire owns
	TArray<AOrbitObject*> m_Systems;

	ABlackHole* m_GalaxyCore;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
