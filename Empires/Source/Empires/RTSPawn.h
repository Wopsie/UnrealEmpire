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

	void ZoomIn();
	void ZoomOut();
	//void ZoomForReal(float val);

	UPROPERTY()
	USceneComponent* m_RootScene;

	UPROPERTY()
	USpringArmComponent* m_SpringArm;

	UPROPERTY()
	UCameraComponent* m_CameraComp;

	UPROPERTY()
	APlayerController* m_PlayerController;

	UPROPERTY()
	float m_MarginX = 15.f;
	UPROPERTY()
	float m_MarginY = 15.f;
	
	UPROPERTY()
	FIntVector m_ScreenSize;
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_CameraSpeed = 40.f; 

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_CameraZoomSpeed = 4.f;

	UPROPERTY()
	float m_CamZoomTarget = 2000;

	UFUNCTION()
	FVector GetCamPanDirection();

	void ZoomCamera(const float& a_DeltaTime);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	

};
