// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Utilities/MechUtility.h"
#include "MechTool.generated.h"

/**
 * 
 */
UCLASS()
class MECHBOT_API AMechTool : public AMechUtility
{
	GENERATED_BODY()

private:

	bool bOnCooldown;

public:
	
	// Every Tool has a "Main Ability" and a "Special ability"
	// "Main Abilities" are typically used to navigate the terrain
	// "Special Abilities" will expend Player Energy to interact with Droids

	virtual void ActivateMainAbility(/*const FVector& StartLocation, const FVector& EndLocation*/);
	virtual void ActivateSpecialAbility() override;

	bool IsOnCooldown() const { return bOnCooldown; }
	void StartCooldown();
	void EndCooldown();
};
