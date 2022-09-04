#pragma once

#include "CoreMinimal.h"
#include "OrbitObject.h"
#include "Star.generated.h"

/**
 * Derived from AOrbitObject because it orbits a blackhole
 */
UCLASS()
class EMPIRES_API AStar : public AOrbitObject
{
	GENERATED_BODY()
	

public:
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	void GenerateOrbiters(int a_Number, float a_Size) override;
	bool ClaimStar(unsigned int a_NewOwner);
	
	inline int GetPlanetNum() const
	{
		return m_Planets.Num();
	}

	inline int GetIndex() const
	{
		return m_StarIndex;
	}

	inline void SetIndex(int a_NewIndex)
	{
		m_StarIndex = a_NewIndex;
	}

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_SystemSize;
	unsigned int m_Owner = 0;	// 0 = unclaimed

private:
	TArray<AActor*> m_Planets;
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_MinDist = 0.1f;
	int m_StarIndex = 0;

};
