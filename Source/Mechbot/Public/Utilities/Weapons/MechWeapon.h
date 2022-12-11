// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Utilities/MechUtility.h"
#include "MechWeapon.generated.h"

/**
 * 
 */
UCLASS()
class MECHBOT_API AMechWeapon : public AMechUtility
{
	GENERATED_BODY()
	
	// Every Weapon has a "Main Ability" and a "Special ability"
	// "Main Abilities" are the primary way to damage enemy Droids
	// "Special Abilities" will expend Player Energy to create a unique effect

protected:

	// Object Configuration Settings
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MechWeapon")
	UClass* MainBullet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MechWeapon")
	UClass* SpecialBullet;

public:

	// Functions
	virtual void GiveToPlayer(AActor* OtherActor) override;
	void SpawnBullet(UClass* BulletClass);
	virtual void ActivateMainAbility() override;
	virtual void ActivateSpecialAbility() override;
};
