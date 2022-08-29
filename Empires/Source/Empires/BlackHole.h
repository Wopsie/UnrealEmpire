// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrbitObject.h"
#include "BlackHole.generated.h"

/**
 * 
 */
UCLASS()
class EMPIRES_API ABlackHole : public AOrbitObject
{
	GENERATED_BODY()
public:
	void BeginPlay() override;
	void GenerateOrbiters(int a_Number, float a_Size) override;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	int m_StarNumber;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_GalaxySize;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_MinDist;
};
