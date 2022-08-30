// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrbitObject.h"
#include "Star.generated.h"

/**
 * Derived from AOrbitObject because it orbits a blackhole
 */
UCLASS()
class EMPIRES_API AStar : public AOrbitObject
{
	GENERATED_BODY()
	

public:
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	void GenerateOrbiters(int a_Number, float a_Size) override;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_SystemSize;
	int m_StarIndex = 0;

private:
	TArray<AActor*> m_Planets;
};
