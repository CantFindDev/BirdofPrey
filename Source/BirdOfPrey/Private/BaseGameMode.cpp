#include "BaseGameMode.h"
#include "BasePlayerController.h"
#include "BaseGameAgent.h"
#include "GameFramework/Controller.h"
#include "BasePowerup.h"

FVector ABaseGameMode::GetWorldScrollVelocity()
{
	return FVector::ZeroVector;
}

AActor* ABaseGameMode::GetWorldCameraActor()
{
	return nullptr;
}

void ABaseGameMode::OnPlayerDied(ABasePlayerController* Player)
{
}

void ABaseGameMode::OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer)
{
}

FVector ABaseGameMode::GetPowerUpSpawnLocation(ABaseGameAgent* Enemy, AController* Killer)
{
	return FVector::ZeroVector;
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame(bool Success)
{
}

void ABaseGameMode::SpawnEnemyFrom(const TArray<TSubclassOf<ABaseGameAgent>>& ClassList)
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp(FVector Location)
{
}

float ABaseGameMode::GetDistanceTravelled()
{
	return 0.0f;
}