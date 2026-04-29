#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"

class UPointLightComponent;
class UAudioComponent;
class ABasePlayerController;
class APlayerController;

#include "PlayerShip.generated.h"

UCLASS()
class BIRDOFPREY_API APlayerShip : public ABaseShip
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UPointLightComponent* PointLight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UAudioComponent* HoverAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* BasePlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float MathExpression(float Dist, float Max, float NegativeScale);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector CalcOutofBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(APlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasDiedRecently();

	using ABaseShip::TakeDamage;
	virtual float TakeDamage(float Damage) override;
};