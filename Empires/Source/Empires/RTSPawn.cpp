// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "Math/IntVector.h"
#include "InputCoreTypes.h"
#include "Components/InputComponent.h"

// Sets default values
ARTSPawn::ARTSPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Basically addcomponent
	m_RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = m_RootScene;	

	m_SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	m_SpringArm->SetupAttachment(m_RootScene); 

	m_SpringArm->bDoCollisionTest = false;
	m_SpringArm->SetRelativeRotation(FRotator(-70, 0, 0));
	
	m_SpringArm->bEnableCameraLag = true;
	m_SpringArm->CameraLagSpeed = 10.0;
	m_SpringArm->TargetArmLength = 2000.f;

	m_CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	//Socketname of springarm is the end of the arm
	m_CameraComp->SetupAttachment(m_SpringArm, USpringArmComponent::SocketName);

}

// Called when the game starts or when spawned
void ARTSPawn::BeginPlay()
{
	Super::BeginPlay();
	
	m_PlayerController = Cast<APlayerController>(GetController());
	m_PlayerController->GetViewportSize(m_ScreenSize.X, m_ScreenSize.Y);

	if (InputComponent)
	{
		InputComponent->BindAction("ZoomIn", IE_Pressed, this, &ARTSPawn::ZoomIn);
		InputComponent->BindAction("ZoomOut", IE_Pressed, this, &ARTSPawn::ZoomOut);
	}
}

// Called every frame
void ARTSPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//transform.translate sortof
	AddActorWorldOffset(GetCamPanDirection() * (m_CameraSpeed * (m_CamZoomTarget * 0.001f)));
	ZoomCamera(DeltaTime);
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
	m_PlayerController->GetMousePosition(mousePos.X, mousePos.Y);

	// 0, 0 is in top left

	if (mousePos.X <= m_MarginX)
	{
		camDir.Y = -1;
	}

	if (mousePos.Y <= m_MarginY)
	{
		camDir.X = 1;
	}

	if (mousePos.X >= m_ScreenSize.X - m_MarginX)
	{
		camDir.Y = 1; 
	}

	if (mousePos.Y >= m_ScreenSize.Y - m_MarginY)
	{
		camDir.X = -1;
	}

	return camDir;
}

void ARTSPawn::ZoomIn()
{
	//set target distance i guess
	m_CamZoomTarget *= 0.9f;
}

void ARTSPawn::ZoomOut()
{
	//Here too i suppose
	m_CamZoomTarget *= 1.1f;

}

void ARTSPawn::ZoomCamera(const float& a_DeltaTime)
{
	//positive value = zooming out
	 //Zoom in or out as necessary
	if (!FMath::IsNearlyEqual(m_SpringArm->TargetArmLength, m_CamZoomTarget, 0.5f))
	{
		// This allows us to smoothly zoom to our desired target arm length over time
		m_SpringArm->TargetArmLength = FMath::FInterpTo(m_SpringArm->TargetArmLength, m_CamZoomTarget,
			a_DeltaTime, m_CameraZoomSpeed);
	}
}
