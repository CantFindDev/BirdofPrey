#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"

class UFloatingPawnMovement;

#include "BaseShip.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseShip : public ABaseGameAgent
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UFloatingPawnMovement* FloatingPawnMovement;

};