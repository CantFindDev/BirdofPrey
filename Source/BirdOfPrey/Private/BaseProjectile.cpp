#include "BaseProjectile.h"
#include "Particles/ParticleSystem.h"
#include "BaseGameAgent.h"
#include "Sound/SoundBase.h"
#include "Components/PrimitiveComponent.h"

void ABaseProjectile::InitialiseProjectile(FVector Direction, float Speed)
{
}

FVector ABaseProjectile::GetInitialVelocity()
{
	return FVector::ZeroVector;
}

void ABaseProjectile::DealDamageTo(AActor* Damaging, float DamageAmount)
{
}

void ABaseProjectile::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
}

TEnumAsByte<ECollisionChannel> ABaseProjectile::GetInstigatorCollisionChannel()
{
	return ECC_WorldStatic; // Random default value
}

void ABaseProjectile::CheckForGroundUnitTarget()
{
}

bool ABaseProjectile::ShouldCheckForGroundTarget()
{
	return false;
}

void ABaseProjectile::AdjustToTarget()
{
}

bool ABaseProjectile::IsEnemyProjectile()
{
	return false;
}

void ABaseProjectile::AdjustToDesiredZ()
{
}