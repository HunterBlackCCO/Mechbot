// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Droids/MechPlayer.h"

AMechPlayer::AMechPlayer()
{
	Lives = 0;

	EquippedToolSlot = 0;
	EquippedWeaponSlot = 0;

	MaxEnergy = 50;
	Energy = MaxEnergy;
}

void AMechPlayer::StartDeath()
{
	Super::StartDeath();

	// Lose a life and initiate Game Over sequence if no more lives remain
	Lives--;

	if (Lives <= 0)
	{
		GameOver();
	}
}

void AMechPlayer::GameOver()
{
	// TODO - Change scene to "Game Over" sequence, then move player back to Main Menu.
}

void AMechPlayer::UpdateHealth(const int32 Damage)
{
	// If the Player has the Durable Armor Upgrade and would receive damage, halve the damage to a minimum of 1 
	const int32 NewDamage = (bHasDurableArmorUpgrade && Damage > 0) ? FMath::Max(1, Damage / 2) : Damage;
	Super::UpdateHealth(NewDamage);
}

void AMechPlayer::StartRechargingEnergy()
{
	if (Energy < MaxEnergy)
	{
		bRechargingEnergy = true;
	}

	// TODO - Notify OnStartRechargeEnergy()
}

void AMechPlayer::RechargeEnergy()
{
	Energy = FMath::Max(Energy + RechargeEnergyRate, MaxEnergy);

	// Once Energy is full, stop recharging
	if (Energy >= MaxEnergy)
	{
		bRechargingEnergy = false;
		// TODO - Notify OnEndRechargeEnergy()
	}
	else
	{
		// TODO - Delay Timer		
		RechargeEnergy();
	}
}

bool AMechPlayer::HasUtility(const AMechUtility* Utility)
{
	if (!Utility)
	{
		return false;
	}
	else if (const AMechWeapon* Weapon = Cast<AMechWeapon>(Utility))
	{
		return HasWeapon(Weapon);
	}
	else if (const AMechTool* Tool = Cast<AMechTool>(Utility))
	{
		return HasTool(Tool);
	}

	// TODO - Log Error
	return false;
}

/// <summary>
/// Returns true if ObtainedTools contains Tool.
/// </summary>
bool AMechPlayer::HasTool(const AMechTool* Tool)
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

/// <summary>
/// Returns true if ObtainedWeapons contains Weapon.
/// </summary>
bool AMechPlayer::HasWeapon(const AMechWeapon* Weapon)
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

/// <summary>
/// Returns true if NewSlot is within a valid range and different than EquippedSlot.
/// </summary>
bool AMechPlayer::IsUtilitySwapValid(const int32 UtilitiesSize, const int8 NewSlot, const int8 EquippedSlot)
{
	// Make sure the desired slot change is valid
	return (NewSlot != EquippedSlot) && (NewSlot >= 0) && (NewSlot < UtilitiesSize);
}

/// <summary>
/// Swaps the Player's equipped Tool to the Tool at the new slot number.
/// </summary>
void AMechPlayer::SwapEquippedTool(const int8 ToolSlot)
{
	// Perform swap only if the swap would be valid
	if (IsUtilitySwapValid(ObtainedTools.Num(), ToolSlot, EquippedToolSlot))
	{
		EquippedToolSlot = ToolSlot;
		// TODO - Notify OnToolSwapped();
	}
}


/// <summary>
/// Swaps the Player's equipped Weapon to the Weapon at the new slot number.
/// </summary>
void AMechPlayer::SwapEquippedWeapon(const int8 WeaponSlot)
{
	// Perform swap only if the swap would be valid
	if (IsUtilitySwapValid(ObtainedWeapons.Num(), WeaponSlot, EquippedWeaponSlot))
	{
		EquippedWeaponSlot = WeaponSlot;
		// TODO - Notify OnWeaponSwapped();
	}
}

void AMechPlayer::ActivateEquippedToolMain()
{
	// Verify the equipped slot is valid
	if (IsEquippedToolSlotValid())
	{
		// Activate the Tool's Main Ability
		ObtainedTools[EquippedToolSlot]->ActivateMainAbility();
	}
}

void AMechPlayer::ActivateEquippedToolSpecial()
{
	// Verify the equipped slot is valid and that Player has enough energy
	if (IsEquippedToolSlotValid() && ObtainedTools[EquippedToolSlot]->CanUseSpecialAbility(Energy))
	{
		// Activate the Tool's Special Ability
		ObtainedTools[EquippedToolSlot]->ActivateSpecialAbility();
	}
}

void AMechPlayer::ActivateEquippedWeaponMain()
{
	// Verify the equipped slot is valid
	if (IsEquippedWeaponSlotValid())
	{
		// Activate the Weapon's Main Ability
		ObtainedWeapons[EquippedWeaponSlot]->ActivateMainAbility();
	}
}

void AMechPlayer::ActivateEquippedWeaponSpecial()
{
	// Verify the equipped slot is valid and that Player has enough energy
	if (IsEquippedToolSlotValid() && ObtainedWeapons[EquippedWeaponSlot]->CanUseSpecialAbility(Energy))
	{
		// Activate the Weapon's Special Ability
		ObtainedWeapons[EquippedWeaponSlot]->ActivateSpecialAbility();
	}
}

bool AMechPlayer::IsEquippedToolSlotValid()
{
	if (!ObtainedTools.Num())
	{
		//UE_LOG(LogMessage, ELogVerbosity::Fatal, TEXT("FATAL Error: MechPlayer::ObtainedTools was found empty.");
		return false;
	}
	else if (!ObtainedTools.IsValidIndex(EquippedToolSlot))
	{
		//UE_LOG(LogMessage, ELogVerbosity::Error, TEXT("Error: Invalid EquippedToolSlot value detected: " + EquippedToolSlot.ToString());
		EquippedToolSlot = 0;
		return false;
	}

	return true;
}

bool AMechPlayer::IsEquippedWeaponSlotValid()
{
	if (!ObtainedWeapons.Num())
	{
		//UE_LOG(LogMessage, ELogVerbosity::Fatal, TEXT("FATAL Error: MechPlayer::ObtainedWeapons was found empty.");
		return false;
	}
	else if (!ObtainedWeapons.IsValidIndex(EquippedWeaponSlot))
	{
		//UE_LOG(LogMessage, ELogVerbosity::Error, TEXT("Error: Invalid EquippedWeaponSlot value detected: " + EquippedWeaponSlot.ToString());
		EquippedWeaponSlot = 0;
		return false;
	}

	return true;
}
