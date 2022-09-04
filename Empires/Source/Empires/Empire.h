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
	AEmpire();

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	// For adding a colonization ship
	void AddShip(const int& a_Index);
	// For beginning the claiming process of a solar system. The more planets, the slower
	void StartClaim();	// maybe add time to claim? based on number of planets?
	
	// For picking a star, whether that be to spawn on or to add to colonization ship route
	void Pick();
	
	void PickRandom();

	// The star system this empire spawn on
	AStar* m_HomeWorld;

	// All ships this empire has control over
	TArray<AActor*> m_Fleet;
	// All stars this empire owns
	TArray<AOrbitObject*> m_OwnedSystems;

	ABlackHole* m_GalaxyCore;


private:	
	void AddStar(AStar* a_Star);
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	FColor m_EmpireColor;
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> m_Ship;
	const int m_EmpireIndex = 5;

	TMap<int, AStar*> m_OwnedStars;



	// Game ends when all stars have been claimed
};
