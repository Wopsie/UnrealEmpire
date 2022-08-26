// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPawn.h"
//#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "Math/IntVector.h"


// Sets default values
ARTSPawn::ARTSPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Add components to actor (or is it blueprint?)

	//Basically addcomponent
	pRootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = pRootScene;	

	pSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	pSpringArm->SetupAttachment(pRootScene); 

	pSpringArm->bDoCollisionTest = false;
	pSpringArm->SetRelativeRotation(FRotator(-70, 0, 0));
	pSpringArm->bEnableCameraLag = true;
	pSpringArm->CameraLagSpeed = 10.0;
	//pSpringArm->TargetArmLength = 50.f;

	pCameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	pCameraComp->SetupAttachment(pSpringArm);

}

// Called when the game starts or when spawned
void ARTSPawn::BeginPlay()
{
	Super::BeginPlay();
	
	pPlayerController = Cast<APlayerController>(GetController());
	pPlayerController->GetViewportSize(screenSize.X, screenSize.Y);


}

// Called every frame
void ARTSPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//transform.translate sortof
	AddActorWorldOffset(GetCamPanDirection() * cameraSpeed);
	//ZoomCamera(DeltaTime);
}

// Called to bind functionality to input
void ARTSPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FVector ARTSPawn::GetCamPanDirection()
{
	FVector2D mousePos;
	FVector camDir = FVector(0, 0, 0);
	pPlayerController->GetMousePosition(mousePos.X, mousePos.Y);

	//UE_LOG(LogTemp, Warning, TEXT("Mouse position: %f, %f"), mousePos.X, mousePos.Y);
	//UE_LOG(LogTemp, Warning, TEXT("Screensize: %d, %d"), screenSize.X, screenSize.Y);

	// 0, 0 is in top left

	if (mousePos.X <= marginX)
	{
		camDir.Y = -1;
	}

	if (mousePos.Y <= marginY)
	{
		camDir.X = 1;
	}

	if (mousePos.X >= screenSize.X - marginX)
	{
		camDir.Y = 1; 
	}

	if (mousePos.Y >= screenSize.Y - marginY)
	{
		camDir.X = -1;
	}

	return camDir;
}

//void ARTSPawn::ZoomCamera(const float& deltaTime)
//{
//	// Apply zoom if we are not within 0.5 units of our desired zoom
//	if (!FMath::IsNearlyEqual(pSpringArm->TargetArmLength, camZoomTarget, 0.5f))
//	{
//		// This allows us to smoothly zoom to our desired target arm length over time
//		pSpringArm->TargetArmLength = FMath::FInterpTo(
//			pSpringArm->TargetArmLength, // the current value
//			camZoomTarget, // the desired length
//			deltaTime, // time passed
//			cameraZoomSpeed // speed at which to move
//		);
//	}
//}