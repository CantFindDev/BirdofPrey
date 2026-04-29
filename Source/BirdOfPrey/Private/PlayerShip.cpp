#include "PlayerShip.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "BasePlayerController.h"
#include "GameFramework/PlayerController.h"

void APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed)
{
	Direction = FVector::ZeroVector;
	Speed = 0.0f;
}

void APlayerShip::ClampToCameraBounds()
{
}

float APlayerShip::GetShipAxisAdjustment(float Dist, float Max)
{
	return 0.0f;
}

float APlayerShip::MathExpression(float Dist, float Max, float NegativeScale)
{
	return 0.0f;
}

FVector APlayerShip::CalcOutofBoundsAdjustment()
{
	return FVector::ZeroVector;
}

void APlayerShip::GetPlayerAgentInfo(APlayerController* Player)
{
}

bool APlayerShip::ShouldSpawnAIController()
{
	return false;
}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently()
{
	return false;
}

float APlayerShip::TakeDamage(float Damage)
{
	return 0.0f;
}