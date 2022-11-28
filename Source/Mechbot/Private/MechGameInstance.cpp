// Copyright Hunter Black, 2022. All Rights Reserved.


#include "MechGameInstance.h"

UMechGameInstance::UMechGameInstance()
{
	Lives = 3;
}

void UMechGameInstance::AddTool(AMechTool* Tool)
{
	if (!Tool)
	{
		return;
	}

	ObtainedTools.AddUnique(Tool);
}

void UMechGameInstance::AddWeapon(AMechWeapon* Weapon)
{
	if (!Weapon)
	{
		return;
	}

	ObtainedWeapons.AddUnique(Weapon);
}

void UMechGameInstance::StartDeath()
{
	Lives--;

	if (Lives < 1)
	{
		// TODO - Wipe player save data
	}
}