// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Utilities/MechUtility.h"

// Sets default values
AMechUtility::AMechUtility()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMechUtility::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMechUtility::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMechUtility::Activate()
{
	// TODO
}

void AMechUtility::ActivateMainAbility()
{
	// TODO
	Activate();
}

void AMechUtility::ActivateSpecialAbility()
{
	// TODO
	// The check for a Player having enough energy to use the Utility should be done in the Player class
	Activate();
}

void AMechUtility::SpawnInWorld(FString UtilityId)
{
	// TODO
}