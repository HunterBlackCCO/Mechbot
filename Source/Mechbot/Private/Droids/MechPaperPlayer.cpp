// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Droids/MechPaperPlayer.h"
#include <MechGameInstance.h>
#include <SaveData/MechSaveData.h>
#include <Kismet/GameplayStatics.h>

AMechPaperPlayer::AMechPaperPlayer()
{
	// Energy
	bCanUseTool = true;
	MaxEnergy = 50;
	Energy = MaxEnergy;
	RechargeEnergyRate = MaxEnergy / 5;
	RechargeEnergyTimer = 1.5f;

	EquippedWeaponSlot = 0;
	EquippedToolSlot = 0;

	// Initialize Components
	BulletSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("BulletSpawnLocation"));
	BulletSpawnLocation->SetupAttachment(RootComponent);
}

void AMechPaperPlayer::BeginPlay()
{
	Super::BeginPlay();

	// Load Saved Data
	UMechSaveData* SaveData = Cast<UMechSaveData>(UGameplayStatics::CreateSaveGameObject(UMechSaveData::StaticClass()));
	if (!SaveData)
	{
		UE_LOG(LogTemp, Error, TEXT("AMechPaperPlayer::BeginPlay() - Could not create save object."));
		return;
	}

	if (SaveData->LoadData(GetWorld(), this))
	{
		OnLoad.Broadcast();
	}
}

void AMechPaperPlayer::TakeDamage(const uint8 Amount)
{
	// If the Player has the Durable Armor Upgrade and would receive damage, halve the damage to a minimum of 1 
	const uint8 NewAmount = (bHasDurableArmorUpgrade && Amount > 1) ? (Amount / 2) : Amount;
	Super::TakeDamage(NewAmount);
}

void AMechPaperPlayer::RechargeEnergy()
{
	// Verify Player hasn't regained energy since the last check
	if (Energy < MaxEnergy)
	{
		RegainEnergy(RechargeEnergyRate);

		// Call itself until Energy is full
		if (Energy < MaxEnergy)
		{
			// TODO - Delay Timer
			RechargeEnergy();
			return;
		}
	}
}

void AMechPaperPlayer::UseEnergy(const uint8 Amount)
{
	// Validate that the Player has enough Energy before this function is called

	if (Amount == 0)
	{
		return;
	}

	// TODO - Clear Recharge Timer
	// Ensure value does not drop below 0
	Energy -= FMath::Min(Amount, Energy);

	SignalEnergyUpdated();
}

void AMechPaperPlayer::RegainEnergy(const uint8 Amount)
{
	if (Amount == 0)
	{
		return;
	}

	// Ensure value does not exceed MaxEnergy
	Energy += FMath::Min(Amount, uint8(MaxEnergy - Energy));

	SignalEnergyUpdated();
}

void AMechPaperPlayer::SignalEnergyUpdated()
{
	const float NewPercentEnergy = GetPercentEnergy();
	OnEnergyUpdated.Broadcast(NewPercentEnergy);
}

bool AMechPaperPlayer::HasUtility(const AMechUtility* Utility)
{
	if (const AMechWeapon* Weapon = Cast<AMechWeapon>(Utility))
	{
		return HasWeapon(Weapon);
	}
	else if (const AMechTool* Tool = Cast<AMechTool>(Utility))
	{
		return HasTool(Tool);
	}
	else if (!Utility)
	{
		UE_LOG(LogTemp, Error, TEXT("AMechPaperPlayer::HasUtility() - Utility was null."));
		return false;
	}

	UE_LOG(LogTemp, Error, TEXT("AMechPaperPlayer::HasUtility() - Invalid Utility type."));
	return false;
}

/** Returns true if ObtainedTools contains Tool. */
bool AMechPaperPlayer::HasTool(const AMechTool* Tool)
{
	if (!Tool)
	{
		return false;
	}

	for (const AMechTool* PlayerTool : ObtainedTools)
	{
		if (PlayerTool == Tool)
		{
			return true;
		}
	}

	return false;
}

/** Returns true if ObtainedWeapons contains Weapon. */
bool AMechPaperPlayer::HasWeapon(const AMechWeapon* Weapon)
{
	if (!Weapon)
	{
		return false;
	}

	for (const AMechWeapon* PlayerWeapon : ObtainedWeapons)
	{
		if (PlayerWeapon == Weapon)
		{
			return true;
		}
	}

	return false;
}

void AMechPaperPlayer::AddWeapon(AMechWeapon* Weapon)
{
	if (!Weapon || HasWeapon(Weapon))
	{
		return;
	}

	ObtainedWeapons.AddUnique(Weapon);

	OnWeaponAdded.Broadcast(Weapon);
}

void AMechPaperPlayer::AddTool(AMechTool* Tool)
{
	if (!Tool || HasTool(Tool))
	{
		return;
	}

	ObtainedTools.AddUnique(Tool);

	OnToolAdded.Broadcast(Tool);
}

/** Returns true if NewSlot is within a valid range and different than EquippedSlot. */
bool AMechPaperPlayer::IsUtilitySwapValid(const int32 UtilitiesSize, const uint8 NewSlot, const uint8 EquippedSlot)
{
	return (NewSlot != EquippedSlot) && (NewSlot < UtilitiesSize);
}

/** Swaps the Player's equipped Tool to the Tool at the new slot number. */
void AMechPaperPlayer::SwapEquippedTool(const uint8 ToolSlot)
{
	// Perform swap and signal listeners only if the swap is valid
	if (IsUtilitySwapValid(ObtainedTools.Num(), ToolSlot, EquippedToolSlot))
	{
		EquippedToolSlot = ToolSlot;
		OnToolEquipped.Broadcast(ObtainedTools[EquippedToolSlot]);
	}
}

/** Swaps the Player's equipped Weapon to the Weapon at the new slot number. */
void AMechPaperPlayer::SwapEquippedWeapon(const uint8 WeaponSlot)
{
	// Perform swap and signal listeners only if the swap is valid
	if (IsUtilitySwapValid(ObtainedWeapons.Num(), WeaponSlot, EquippedWeaponSlot))
	{
		EquippedWeaponSlot = WeaponSlot;
		OnWeaponEquipped.Broadcast(ObtainedWeapons[EquippedWeaponSlot]);
	}
}

bool AMechPaperPlayer::CanUseEquippedTool()
{
	return bCanUseTool && IsEquippedToolSlotValid() && !ObtainedTools[EquippedToolSlot]->IsOnCooldown();
}

void AMechPaperPlayer::ActivateEquippedToolMain()
{
	// Activate the Tool's Main Ability if the equipped slot is valid
	if (CanUseEquippedTool())
	{
		ObtainedTools[EquippedToolSlot]->ActivateMainAbility();
	}
}

void AMechPaperPlayer::ActivateEquippedToolSpecial()
{
	// Activate the Tool's Special Ability if the equipped slot is valid and that Player has enough energy
	if (CanUseEquippedTool() && ObtainedTools[EquippedToolSlot]->CanUseSpecialAbility(Energy))
	{
		ObtainedTools[EquippedToolSlot]->ActivateSpecialAbility();
	}
}

bool AMechPaperPlayer::CanUseEquippedWeapon()
{
	return bCanAttack && IsEquippedWeaponSlotValid();
}

bool AMechPaperPlayer::ActivateEquippedWeaponMain()
{
	// Activate the Weapon's Main Ability if the equipped slot is valid
	if (CanUseEquippedWeapon())
	{
		ObtainedWeapons[EquippedWeaponSlot]->ActivateMainAbility();
		return true;
	}
	return false;
}

bool AMechPaperPlayer::ActivateEquippedWeaponSpecial()
{
	// Activate the Weapon's Special Ability if the equipped slot is valid and that Player has enough energy
	if (CanUseEquippedWeapon() && ObtainedWeapons[EquippedWeaponSlot]->CanUseSpecialAbility(Energy))
	{
		ObtainedWeapons[EquippedWeaponSlot]->ActivateSpecialAbility();
		UseEnergy(ObtainedWeapons[EquippedWeaponSlot]->GetSpecialEnergyCost());
		return true;
	}
	return false;
}

bool AMechPaperPlayer::IsEquippedToolSlotValid()
{
	if (ObtainedTools.IsValidIndex(EquippedToolSlot))
	{
		return true;
	}
	else if (!ObtainedTools.Num())
	{
		return false;
	}

	UE_LOG(LogTemp, Error, TEXT("AMechPaperPlayer::IsEquippedToolSlotValid() - Invalid EquippedToolSlot value detected: %i"), EquippedToolSlot);
	EquippedToolSlot = 0;
	return false;
}

bool AMechPaperPlayer::IsEquippedWeaponSlotValid()
{
	if (ObtainedWeapons.IsValidIndex(EquippedWeaponSlot))
	{
		return true;
	}
	else if (!ObtainedWeapons.Num())
	{
		return false;
	}
	
	UE_LOG(LogTemp, Error, TEXT("AMechPaperPlayer::IsEquippedWeaponSlotValid() - Invalid EquippedWeaponSlot value detected: %i"), EquippedWeaponSlot);
	EquippedWeaponSlot = 0;
	return false;
}

void AMechPaperPlayer::SaveOnWin()
{
	// Save Data for a NewGame+
	UMechSaveData* SaveData = Cast<UMechSaveData>(UGameplayStatics::CreateSaveGameObject(UMechSaveData::StaticClass()));
	if (!SaveData)
	{
		UE_LOG(LogTemp, Error, TEXT("AMechPaperPlayer::SaveOnWin() - Could not create save object."));
		return;
	}

	SaveData->SaveDataAfterGameWin(GetWorld(), this);
}