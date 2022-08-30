// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrbitObject.h"
#include "BlackHole.generated.h"

class AStar;

/**
 * Derived from AOrbitObject because it (theoretically) orbits the great attractor
 */
UCLASS()
class EMPIRES_API ABlackHole : public AOrbitObject
{
	GENERATED_BODY()
public:
	void BeginPlay() override;
	void GenerateOrbiters(int a_Number, float a_Size) override;
	const TArray<AStar*>& GetStars() const;
	const AStar& GetStarAtIndex(const int& a_Index) const;
	AStar& GetStarRefAtIndex(const int& a_Index);
	const int GetStarNumber() const;

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	int m_StarNumber;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_GalaxySize;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_MinDist;

	TArray<AStar*> m_Stars;
};
