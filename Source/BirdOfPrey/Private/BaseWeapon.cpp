#include "BaseWeapon.h"

void ABaseWeapon::StartFire()
{
}

void ABaseWeapon::StopFire()
{
}

void ABaseWeapon::PlayFireEffects()
{
}

FTransform ABaseWeapon::GetFireEffectSpawnTransform()
{
	return FTransform();
}

bool ABaseWeapon::HasFinishedFiring()
{
	return false;
}

bool ABaseWeapon::IsFiring()
{
	return false;
}