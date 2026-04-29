#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"

class ABaseAIController;

#include "BaseEnemyShip.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseAIController* ShipAIController;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();
};