#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OrbitObject.generated.h"

UCLASS()
class EMPIRES_API AOrbitObject : public AActor
{
	GENERATED_BODY()
	
public:	
	AOrbitObject();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	// Effectively a factory pattern
	virtual void GenerateOrbiters(int a_Number, float a_Size);
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> m_CelestialObj;

private:	


};
