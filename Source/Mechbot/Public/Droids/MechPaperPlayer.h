// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Droids/MechPaperDroid.h"
#include <Utilities/MechUtility.h>
#include <Utilities/Weapons/MechWeapon.h>
#include <Utilities/Tools/MechTool.h>
#include "MechPaperPlayer.generated.h"

// Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnergyUpdated, float, NewPercent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponEquipped, AMechWeapon*, EquippedWeapon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToolEquipped, AMechTool*, EquippedWeapon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRevive);

/**
 * 
 */
UCLASS()
class MECHBOT_API AMechPaperPlayer : public AMechPaperDroid
{
	GENERATED_BODY()
	
	AMechPaperPlayer();

	// Delegates
	UPROPERTY(BlueprintAssignable)
	FOnEnergyUpdated OnEnergyUpdated;

	UPROPERTY(BlueprintAssignable)
	FOnWeaponEquipped OnWeaponEquipped;

	UPROPERTY(BlueprintAssignable)
	FOnToolEquipped OnToolEquipped;

	UPROPERTY(BlueprintAssignable)
	FOnRevive OnRevive;

private:

	uint8 Energy;
	bool bCanUseTool;

	// Utilities
	TArray<AMechTool*> ObtainedTools;
	uint8 EquippedToolSlot;

	TArray<AMechWeapon*> ObtainedWeapons;
	uint8 EquippedWeaponSlot;
	
	// States
	bool bCanWallJump;

	// Planned Upgrades
	bool bHasWallJumpUpgrade;
	bool bHasDurableArmorUpgrade;

protected:

	// Blueprint Editable
	UPROPERTY(EditDefaultsOnly, meta=(ClampMin=1))
	uint8 MaxEnergy;

	UPROPERTY(EditDefaultsOnly)
	uint8 RechargeEnergyRate;

	UPROPERTY(EditDefaultsOnly)
	float RechargeEnergyTimer;

public:

	virtual void BeginPlay() override;

	// Getters
	bool CanWallJump() const { return bHasWallJumpUpgrade && bCanWallJump; }

	// Health
	virtual void TakeDamage(const uint8 Amount) override;

	// Energy
	void SetRechargeEnergyRate(const uint8 NewRate) { RechargeEnergyRate = NewRate; }
	void RechargeEnergy();
	void UseEnergy(const uint8 Amount);

	UFUNCTION(BlueprintPure, Category = "MechDroid|Player|Energy")
	float GetPercentEnergy() const { return (MaxEnergy != 0) ? ((Energy * 1.f) / MaxEnergy) : 0.f; }

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Player|Energy")
	void RegainEnergy(const uint8 Amount);

	void SignalEnergyUpdated();

	// Get Tools and Weapons 
	bool HasUtility(const AMechUtility* Utility);
	bool HasTool(const AMechTool* Tool);
	bool HasWeapon(const AMechWeapon* Weapon);

	const TArray<AMechWeapon*>& GetObtainedWeapons() { return ObtainedWeapons; }
	const TArray<AMechTool*>& GetObtainedTools() { return ObtainedTools; }

	bool IsUtilitySwapValid(const int32 UtilitiesSize, const uint8 NewSlot, const uint8 EquippedSlot);
	void SwapEquippedTool(const uint8 ToolSlot);
	void SwapEquippedWeapon(const uint8 WeaponSlot);

	// Use Tools
	bool IsEquippedToolSlotValid();
	bool CanUseEquippedTool();
	void ActivateEquippedToolMain();
	void ActivateEquippedToolSpecial();

	// Use Weapons
	bool IsEquippedWeaponSlotValid();
	bool CanUseEquippedWeapon();

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Player|Weapon")
	void ActivateEquippedWeaponMain();

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Player|Weapon")
	void ActivateEquippedWeaponSpecial();

};
