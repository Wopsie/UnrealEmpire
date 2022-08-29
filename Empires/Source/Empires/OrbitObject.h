#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OrbitObject.generated.h"

UCLASS()
class EMPIRES_API AOrbitObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOrbitObject();
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Function for generating orbiting children. Idk how UE4 does pure virtual
	virtual void GenerateOrbiters(int a_Number, float a_Size);
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> m_CelestialObj;

private:	


};
