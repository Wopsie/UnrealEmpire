// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RTSPawn.generated.h"

class USceneComponent;
class USpringArmComponent;
class UCameraComponent;
class APlayerController;
struct FIntVector;

UCLASS()
class EMPIRES_API ARTSPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARTSPawn();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY()
	USceneComponent* pRootScene;

	UPROPERTY()
	USpringArmComponent* pSpringArm;

	UPROPERTY()
	UCameraComponent* pCameraComp;

	UPROPERTY()
	APlayerController* pPlayerController;

	UPROPERTY()
	float marginX = 15.f;
	UPROPERTY()
	float marginY = 15.f;
	
	UPROPERTY()
	FIntVector screenSize;
	
	UPROPERTY()
	float cameraSpeed = 3.f; 

	//UPROPERTY()
	//float cameraZoomSpeed = 4.f;

	//UPROPERTY()
	//float camZoomTarget = 5.f;

	UFUNCTION()
	FVector GetCamPanDirection();

	/*UFUNCTION()
	void ZoomCamera(const float& deltaTime);*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	

};
