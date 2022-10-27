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
	
public:

	// Every Weapon has a "Main Ability" and a "Special ability"
	// "Main Abilities" are the primary way to damage Droids
	// "Special Abilities" will expend Player Energy to create a unique effect

	virtual void ActivateMainAbility() override;
	virtual void ActivateSpecialAbility() override;
};
