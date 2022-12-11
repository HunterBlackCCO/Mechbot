// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Utilities/Weapons/MechWeapon.h"
#include <Utilities/Weapons/Bullets/MechBullet.h>
#include <Droids/MechPaperPlayer.h>

void AMechWeapon::SpawnBullet(UClass* BulletClass)
{
	// Ensure bullet class is a valid type
	if (!BulletClass || !BulletClass->IsChildOf(AMechBullet::StaticClass()))
	{
		return;
	}
	
	// Set the Player as the owner to prevent self-damage and spawn the bullet
	if (AMechPaperPlayer* Player = Cast<AMechPaperPlayer>(GetOwner()))
	{
		FActorSpawnParameters SpawnParameters = FActorSpawnParameters();
		SpawnParameters.Owner = Player;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GetWorld()->SpawnActor<AMechBullet>(BulletClass, Player->GetBulletSpawnTransform(), SpawnParameters);
	}
}

void AMechWeapon::ActivateMainAbility()
{
	Super::ActivateMainAbility();
	SpawnBullet(MainBullet);
}

void AMechWeapon::ActivateSpecialAbility()
{
	Super::ActivateSpecialAbility();
	SpawnBullet(SpecialBullet);
}

void AMechWeapon::GiveToPlayer(AActor* OtherActor)
{
	if (AMechPaperPlayer* Player = Cast<AMechPaperPlayer>(OtherActor))
	{
		Player->AddWeapon(this);
		Super::GiveToPlayer(OtherActor);
	}
}
