#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpaceShip.generated.h"

class AOrbitObject;
class AStar;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReachedPlanet, int32, a_ReachedStarIndex);

UCLASS()
class EMPIRES_API ASpaceShip : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpaceShip();

	inline void AgregateStars(TArray<AStar*>* const a_Stars)
	{
		if (m_Stars == nullptr)
			m_Stars = a_Stars;
	}
	
	inline void SetOwner(const int& a_EmpIndex, const int& a_HomeworldIndex)
	{
		m_EmpIndex = a_EmpIndex;
		m_HomeIndex = a_HomeworldIndex;
	}
	
	virtual void Tick(float DeltaTime) override;

	FReachedPlanet m_OnPlanetReached;

protected:
	virtual void BeginPlay() override;

private:	
	// Needs all stars to determine most efficient route.
	// 


	//these would be const if I could pass them through constructor
	TArray<AStar*>* m_Stars = nullptr;
	int m_EmpIndex;
	int m_HomeIndex;

};
