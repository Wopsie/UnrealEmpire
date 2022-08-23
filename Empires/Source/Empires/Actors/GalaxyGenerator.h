#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GalaxyGenerator.generated.h"

UCLASS()
class EMPIRES_API AGalaxyGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGalaxyGenerator();
	// Called every frame
	//int* myTestInt = new int(1);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> StarObj;

};
