// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrbitObject.h"
#include "Planet.generated.h"

/**
 * 
 */
UCLASS()
class EMPIRES_API APlanet : public AOrbitObject
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;
	
};
