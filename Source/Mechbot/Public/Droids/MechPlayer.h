// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Droids/MechDroid.h"
#include <Utilities/MechUtility.h>
#include <Utilities/Tools/MechTool.h>
#include <Utilities/Weapons/MechWeapon.h>
#include "MechPlayer.generated.h"

/**
 * 
 */
UCLASS()
class MECHBOT_API AMechPlayer : public AMechDroid
{
	GENERATED_BODY()

	AMechPlayer();

private:

	int8 Lives;

	// Utilities
	TArray<AMechTool*> ObtainedTools;
	int8 EquippedToolSlot;

	TArray<AMechWeapon*> ObtainedWeapons;
	int8 EquippedWeaponSlot;

	// States
	bool bWallJumped;
	bool bUsingWeapons; // Toggle for equipping tools or weapons

	// Planned Upgrades
	bool bHasWallJumpUpgrade;
	bool bHasDurableArmorUpgrade;

protected:

	int32 Energy;
	int32 MaxEnergy;

	int32 RechargeEnergyRate;
	bool bRechargingEnergy;

public:

	// Getters
	bool CanWallJump() const { return bHasWallJumpUpgrade && !bWallJumped; }
	bool IsUsingWeapons() const { return bUsingWeapons; } // Maybe return custom enum?
	bool IsRechargingEnergy() const { return bRechargingEnergy; }

	virtual void StartDeath() override;
	void GameOver();

	// Setters
	void SetRechargeEnergyRate(const int32 NewRate) { RechargeEnergyRate = NewRate; }
	

	virtual void UpdateHealth(const int32 Damage) override;

	// Energy
	void StartRechargingEnergy();
	void RechargeEnergy();

	// Utility Checks	
	void ToggleUsingWeapons() { bUsingWeapons = !bUsingWeapons; }
	void SetUsingWeapons(const bool bUseWeapons) { bUsingWeapons = bUseWeapons; }

	// Potentially swap out the input parameters for the Id instead?
	bool HasUtility(const AMechUtility* Utility);
	bool HasTool(const AMechTool* Tool);
	bool HasWeapon(const AMechWeapon* Weapon);

	void GetObtainedWeapons(TArray<AMechWeapon*> Weapons) const { Weapons = ObtainedWeapons; }
	void GetObtainedTools(TArray<AMechTool*> Tools) const { Tools = ObtainedTools; }

	bool IsUtilitySwapValid(const int32 UtilitiesSize, const int8 NewSlot, const int8 EquippedSlot);
	void SwapEquippedTool(const int8 ToolSlot);
	void SwapEquippedWeapon(const int8 WeaponSlot);

	void ActivateEquippedToolMain();
	void ActivateEquippedToolSpecial();
	void ActivateEquippedWeaponMain();
	void ActivateEquippedWeaponSpecial();

	// Error Handling
	bool IsEquippedToolSlotValid();
	bool IsEquippedWeaponSlotValid();


	// Delegates
	// OnStartRechargeEnergy()
	// OnEndRechargeEnergy()
	// OnToolSwapped()
	// OnWeaponSwapped()
};
