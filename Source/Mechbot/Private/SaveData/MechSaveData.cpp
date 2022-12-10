// Copyright Hunter Black, 2022. All Rights Reserved.

#include "SaveData/MechSaveData.h"
#include <MechGameInstance.h>
#include <Kismet/GameplayStatics.h>

bool UMechSaveData::SaveData(const UWorld* World, AMechCheckpoint* Checkpoint, AMechPaperPlayer* Player)
{
	if (!World || !Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("UMechSaveData::SaveData() - World or Player is null."));
		return false;
	}

	UMechGameInstance* GameInstance = Cast<UMechGameInstance>(World->GetGameInstance());
	if (!GameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveData() - Could not get game instance."));
		return false;
	}

	// Make sure data is valid
	Lives = GameInstance->GetLifeCount();
	if (Lives == 0 || (Checkpoint && Checkpoint->GetId() == 0))
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveData() - Invalid data not saved."));
		return false;
	}

	// Pause the game while writing to files
	UGameplayStatics::SetGamePaused(World, true);

	// Save the Player Data
	ActiveCheckpoint = Checkpoint;
	ObtainedTools = Player->GetObtainedTools();
	ObtainedWeapons = Player->GetObtainedWeapons();

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
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterDeath() - World is null."));
		return;
	}

	// Pause the game while reading and writing to files
	UGameplayStatics::SetGamePaused(World, true);

	if (LifeCount > 0)
	{
		// Maintain the previous Player Data, if any existed
		if (UGameplayStatics::DoesSaveGameExist(SAVENAME, 0))
		{
			if (const UMechSaveData* LoadData = Cast<UMechSaveData>(UGameplayStatics::LoadGameFromSlot(SAVENAME, 0)))
			{
				ActiveCheckpoint = LoadData->ActiveCheckpoint;
				ObtainedTools = LoadData->ObtainedTools;
				ObtainedWeapons = LoadData->ObtainedWeapons;
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterDeath() - Failed to load data from existing save data!"));
			}
		}

		// Save the new life count
		Lives = LifeCount;

		if (!UGameplayStatics::SaveGameToSlot(this, SAVENAME, 0))
		{
			UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterDeath() - Save failed!"));
		}
	}
	else
	{
		// No more lives - Reset Player Save Data
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
	if (!World || !Player)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterGameWin() - World or Player is null."));
		return;
	}

	UMechGameInstance* GameInstance = Cast<UMechGameInstance>(World->GetGameInstance());
	if (!GameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::SaveDataAfterGameWin() - Could not get game instance."));
		return;
	}

	// Set the Player back to the beginning, keeping their Weapons/Tools and resetting their life count
	GameInstance->SetLives(3);
	SaveData(World, nullptr, Player);
}

bool UMechSaveData::LoadData(const UWorld* World, AMechPaperPlayer* Player)
{
	if (!World || !Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("UMechSaveData::LoadData() - World or Player is null."));
		return false;
	}

	// Initialize Player Tools/Weapons from stored data
	UMechGameInstance* GameInstance = Cast<UMechGameInstance>(World->GetGameInstance());
	if (!GameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechSaveData::LoadData() - Could not get game instance."));
		return false;
	}

	// Pause the game while reading from files
	UGameplayStatics::SetGamePaused(World, true);

	// Load data from file
	const bool bSaveExists = UGameplayStatics::DoesSaveGameExist(SAVENAME, 0);
	if (bSaveExists)
	{
		const UMechSaveData* LoadData = Cast<UMechSaveData>(UGameplayStatics::LoadGameFromSlot(SAVENAME, 0));
		if (!LoadData)
		{
			UE_LOG(LogTemp, Error, TEXT("UMechSaveData::LoadData() - Save data found but could not be loaded."));
			UGameplayStatics::SetGamePaused(World, false);
			return false;
		}
		
		if (LoadData->Lives == 0)
		{
			// Data is invalid, delete it
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

		// Data is valid, Load it in
		GameInstance->SetLives(LoadData->Lives);

		for (AMechTool* Tool : LoadData->ObtainedTools)
		{
			Tool->GiveToPlayer(Player);
		}

		for (AMechWeapon* Weapon : LoadData->ObtainedWeapons)
		{
			Weapon->GiveToPlayer(Player);
		}

		// Move the Player to the checkpoint and activate it if it's valid
		if (AMechCheckpoint* Checkpoint = LoadData->ActiveCheckpoint)
		{
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
