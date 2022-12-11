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
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponAdded, AMechWeapon*, NewWeapon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToolEquipped, AMechTool*, EquippedWeapon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToolAdded, AMechTool*, NewTool);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRevive);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoad);

/**
 * 
 */
UCLASS()
class MECHBOT_API AMechPaperPlayer : public AMechPaperDroid
{
	GENERATED_BODY()
	
	AMechPaperPlayer();

public:

	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	USceneComponent* BulletSpawnLocation;

	// Delegates
	UPROPERTY(BlueprintAssignable)
	FOnEnergyUpdated OnEnergyUpdated;

	UPROPERTY(BlueprintAssignable)
	FOnWeaponEquipped OnWeaponEquipped;

	UPROPERTY(BlueprintAssignable)
	FOnWeaponAdded OnWeaponAdded;

	UPROPERTY(BlueprintAssignable)
	FOnToolEquipped OnToolEquipped;

	UPROPERTY(BlueprintAssignable)
	FOnToolAdded OnToolAdded;

	UPROPERTY(BlueprintAssignable)
	FOnRevive OnRevive;

	UPROPERTY(BlueprintAssignable)
	FOnLoad OnLoad;

private:

	// Data the Player needs to function

	uint8 Energy;
	bool bCanUseTool;

	// Utilities
	TArray<AMechTool*> ObtainedTools;
	uint8 EquippedToolSlot;

	TArray<AMechWeapon*> ObtainedWeapons;
	uint8 EquippedWeaponSlot;
	
	// NOT YET IMPLEMENTED - Kept for future use
	bool bCanWallJump;
	bool bHasWallJumpUpgrade;
	bool bHasDurableArmorUpgrade;

protected:

	// Object Configuration Settings
	UPROPERTY(EditDefaultsOnly, meta=(ClampMin=1))
	uint8 MaxEnergy;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	uint8 RechargeEnergyRate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float RechargeEnergyTimer;

public:

	virtual void BeginPlay() override;

	// Public Read-Only Getters
	bool CanWallJump() const { return bHasWallJumpUpgrade && bCanWallJump; }
	const FTransform& GetBulletSpawnTransform() const { return (BulletSpawnLocation) ? BulletSpawnLocation->GetComponentTransform() : GetActorTransform(); }
	const TArray<AMechTool*>& GetObtainedTools() { return ObtainedTools; }

	UFUNCTION(BlueprintPure, Category = "MechDroid|Player|Weapon")
	const TArray<AMechWeapon*>& GetObtainedWeapons() { return ObtainedWeapons; }

	UFUNCTION(BlueprintPure, Category = "MechDroid|Player|Weapon")
	const AMechWeapon* GetEquippedWeapon() const { return (ObtainedWeapons.IsValidIndex(EquippedWeaponSlot)) ? ObtainedWeapons[EquippedWeaponSlot] : nullptr; }

	UFUNCTION(BlueprintPure, Category = "MechDroid|Player|Weapon")
	const float GetEquippedWeaponCooldown() const {	return (ObtainedWeapons.IsValidIndex(EquippedWeaponSlot)) ? ObtainedWeapons[EquippedWeaponSlot]->GetCooldownTimer() : -1; }

	UFUNCTION(BlueprintPure, Category = "MechDroid|Player|Weapon")
	const uint8 GetEquippedWeaponSlot() const { return EquippedWeaponSlot; }

	UFUNCTION(BlueprintPure, Category = "MechDroid|Player|Weapon")
	const bool HasAnyWeapons() const { return ObtainedWeapons.Num() > 0; }

	UFUNCTION(BlueprintPure, Category = "MechDroid|Player|Energy")
	float GetPercentEnergy() const { return (MaxEnergy != 0) ? ((Energy * 1.f) / MaxEnergy) : 0.f; }

	// Health Functions
	virtual void TakeDamage(const uint8 Amount) override;

	// Energy Functions
	void SetRechargeEnergyRate(const uint8 NewRate) { RechargeEnergyRate = NewRate; }
	void UseEnergy(const uint8 Amount);

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Player|Energy")
	void RegainEnergy(const uint8 Amount);

	void SignalEnergyUpdated();

	// Utility Functions
	bool HasUtility(const AMechUtility* Utility);
	bool HasTool(const AMechTool* Tool);
	bool HasWeapon(const AMechWeapon* Weapon);

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Player|Weapon")
	void AddWeapon(AMechWeapon* Weapon);
	void AddTool(AMechTool* Tool);

	bool IsUtilitySwapValid(const int32 UtilitiesSize, const uint8 NewSlot, const uint8 EquippedSlot);
	void SwapEquippedTool(const uint8 ToolSlot);

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Player|Weapon")
	void SwapEquippedWeapon(const uint8 WeaponSlot);

	// Utility Functions - Use Tools
	bool IsEquippedToolSlotValid();
	bool CanUseEquippedTool();
	void ActivateEquippedToolMain();
	void ActivateEquippedToolSpecial();

	// Utility Functions - Use Weapons
	bool IsEquippedWeaponSlotValid();
	bool CanUseEquippedWeapon();

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Player|Weapon")
	bool ActivateEquippedWeaponMain();

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Player|Weapon")
	bool ActivateEquippedWeaponSpecial();
	
	// Event Functions
	UFUNCTION(BlueprintCallable)
	void SaveOnWin();
};
