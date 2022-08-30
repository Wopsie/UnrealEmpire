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


}

// Called every frame
void ARTSPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//transform.translate sortof
	AddActorWorldOffset(GetCamPanDirection() * m_CameraSpeed);
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
