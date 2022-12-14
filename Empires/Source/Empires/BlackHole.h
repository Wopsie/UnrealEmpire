#pragma once

#include "CoreMinimal.h"
#include "OrbitObject.h"
#include "BlackHole.generated.h"

class AStar;

/**
 * Derived from AOrbitObject because it (theoretically) orbits the great attractor
 */
UCLASS()
class EMPIRES_API ABlackHole : public AOrbitObject
{
	GENERATED_BODY()
public:
	void BeginPlay() override;
	void GenerateOrbiters(int a_Number, float a_Size) override;
	TArray<AStar*>* const GetStars() const;
	const AStar& GetStarAtIndex(const int& a_Index) const;
	AStar& GetStarRefAtIndex(const int& a_Index);
	const int GetStarNumber() const;

private:
	void GenerateDistMat(TArray<AStar*> a_Coordinates, TArray<TArray<float>*>& a_Matrix);
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	int m_StarNumber;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_GalaxySize;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float m_MinDist;

	TArray<AStar*> m_Stars;
	TArray<AStar*>* const m_ConstPStars = &m_Stars;	//UE has forced my hand
	TArray<TArray<float>*>* m_StarDistMat;

	//TMap<, float> m_DistanceMatrix;
	//TSet<AStar*>

	//might need structure containing unique ID for each combination of stars as key for traversing distance matrix
};
