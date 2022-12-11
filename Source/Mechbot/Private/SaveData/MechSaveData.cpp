// Copyright Hunter Black, 2022. All Rights Reserved.

#include "SaveData/MechSaveData.h"
#include <MechGameInstance.h>
#include <Kismet/GameplayStatics.h>

bool UMechSaveData::SaveData(const UWorld* World, AMechCheckpoint* Checkpoint, AMechPaperPlayer* Player)
{
	// Ensure the World and Player are valid
	if (!World || !Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("UMechSaveData::SaveData() - World or Player is null."));
		return false;
	}

	// Get the Game Instance for persistent data
	UMechGameInstance* GameInstance = Cast<UMechGameInstance>(World->GetGameInstance());
	if (!GameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveData() - Could not get game instance."));
		return false;
	}

	// Make sure the data requesting Save is valid
	// A nullptr Checkpoint is valid and means the Player is starting from the beginning
	Lives = GameInstance->GetLifeCount();
	if (Lives == 0 || (Checkpoint && Checkpoint->GetId() == 0))
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveData() - Invalid data not saved."));
		return false;
	}

	// Pause the game while writing to files
	UGameplayStatics::SetGamePaused(World, true);

	// Store the data to be saved
	ActiveCheckpoint = Checkpoint;
	ObtainedTools = Player->GetObtainedTools();
	ObtainedWeapons = Player->GetObtainedWeapons();

	// Save the data
	const bool bSaveResult = UGameplayStatics::SaveGameToSlot(this, SAVENAME, 0);
	if (bSaveResult)
	{
		if (Checkpoint)
		{
			GameInstance->SetActiveCheckpoint(Checkpoint->GetId());
		}

		UE_LOG(LogTemp, Log, TEXT("Save successful!"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveData() - Save failed!"));
	}

	// Finished writing to files, unpause game
	UGameplayStatics::SetGamePaused(World, false);
	return bSaveResult;
}

void UMechSaveData::SaveDataAfterDeath(const UWorld* World, uint8 LifeCount)
{
	// Ensure the World is valid
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterDeath() - World is null."));
		return;
	}

	// Pause the game while reading and writing to files
	UGameplayStatics::SetGamePaused(World, true);

	if (LifeCount > 0)
	{
		// If the Player still has lives remaining, restore data from a previous save
		if (UGameplayStatics::DoesSaveGameExist(SAVENAME, 0))
		{
			if (const UMechSaveData* LoadData = Cast<UMechSaveData>(UGameplayStatics::LoadGameFromSlot(SAVENAME, 0)))
			{
				// Store the data to be saved (excluding lives)
				ActiveCheckpoint = LoadData->ActiveCheckpoint;
				ObtainedTools = LoadData->ObtainedTools;
				ObtainedWeapons = LoadData->ObtainedWeapons;
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterDeath() - Failed to load data from existing save data!"));
			}
		}

		// Store the new life count
		Lives = LifeCount;

		// Save the data
		if (!UGameplayStatics::SaveGameToSlot(this, SAVENAME, 0))
		{
			UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterDeath() - Save failed!"));
		}
	}
	else
	{
		// If the Player has no remaining lives, delete any saved data
		if (UGameplayStatics::DoesSaveGameExist(SAVENAME, 0))
		{
			if (!UGameplayStatics::DeleteGameInSlot(SAVENAME, 0))
			{
				UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterDeath() - Failed to delete existing save data!"));
			}
		}
	}

	// Finished reading and writing to files, unpause game
	UGameplayStatics::SetGamePaused(World, false);
}

void UMechSaveData::SaveDataAfterGameWin(const UWorld* World, AMechPaperPlayer* Player)
{
	// Ensure the World and Player are valid
	if (!World || !Player)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterGameWin() - World or Player is null."));
		return;
	}

	// Get the Game Instance for persistent data
	UMechGameInstance* GameInstance = Cast<UMechGameInstance>(World->GetGameInstance());
	if (!GameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterGameWin() - Could not get game instance."));
		return;
	}

	// Restart the Player, keeping their Weapons/Tools and restoring their life count
	GameInstance->SetLives(3);
	SaveData(World, nullptr, Player);
}

bool UMechSaveData::LoadData(const UWorld* World, AMechPaperPlayer* Player)
{
	// Ensure the World and Player are valid
	if (!World || !Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("UMechSaveData::LoadData() - World or Player is null."));
		return false;
	}

	// Get the Game Instance for persistent data
	UMechGameInstance* GameInstance = Cast<UMechGameInstance>(World->GetGameInstance());
	if (!GameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::LoadData() - Could not get game instance."));
		return false;
	}

	// Pause the game while reading files
	UGameplayStatics::SetGamePaused(World, true);

	// Load saved data if any exists
	const bool bSaveExists = UGameplayStatics::DoesSaveGameExist(SAVENAME, 0);
	if (bSaveExists)
	{
		// If there is an issue with loading the saved data, abort the Load
		const UMechSaveData* LoadData = Cast<UMechSaveData>(UGameplayStatics::LoadGameFromSlot(SAVENAME, 0));
		if (!LoadData)
		{
			UE_LOG(LogTemp, Error, TEXT("UMechSaveData::LoadData() - Save data found but could not be loaded."));

			UGameplayStatics::SetGamePaused(World, false);
			return false;
		}
		
		if (LoadData->Lives == 0)
		{
			// If the saved data is invalid, delete it and abort it
			if (!UGameplayStatics::DeleteGameInSlot(SAVENAME, 0))
			{
				UE_LOG(LogTemp, Error, TEXT("UMechSaveData::LoadData() - Failed to delete existing invalid save data!"));
				UGameplayStatics::SetGamePaused(World, false);
				return false;
			}

			UE_LOG(LogTemp, Error, TEXT("UMechSaveData::LoadData() - Invalid Save Data found and erased."));
			UGameplayStatics::SetGamePaused(World, false);
			return false;
		}

		// All data should be valid at this point - Load it in
		GameInstance->SetLives(LoadData->Lives);

		for (AMechTool* Tool : LoadData->ObtainedTools)
		{
			Tool->GiveToPlayer(Player);
		}

		for (AMechWeapon* Weapon : LoadData->ObtainedWeapons)
		{
			Weapon->GiveToPlayer(Player);
		}

		if (AMechCheckpoint* Checkpoint = LoadData->ActiveCheckpoint)
		{
			// Move the Player to the checkpoint and activate it if it's valid
			const uint8 CheckpointId = Checkpoint->GetId();
			if (CheckpointId > 0)
			{
				GameInstance->SetActiveCheckpoint(CheckpointId);
				Checkpoint->OnCreated.Broadcast();
				Player->SetActorLocation(Checkpoint->GetActorLocation());
			}
		}

		UE_LOG(LogTemp, Log, TEXT("Load successful!"))
	}

	// Finished reading from files, unpause game
	UGameplayStatics::SetGamePaused(World, false);
	return bSaveExists;
}
