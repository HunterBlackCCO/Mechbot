// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Droids/MechPaperDroid.h"

AMechPaperDroid::AMechPaperDroid()
{
	// Initialize variables with default values
	MaxHealth = 100;
	Health = MaxHealth;
	PrimaryActorTick.bCanEverTick = true;
}

void AMechPaperDroid::BeginPlay()
{
	Super::BeginPlay();

	// Initialize variables with default values
	bCanAttack = true;
	bCanBeDamaged = true;
	bCanMove = true;

	// Initialize variables with configured values
	Health = MaxHealth;
}

void AMechPaperDroid::TakeDamage(const uint8 Amount)
{
	if (!bCanBeDamaged || Amount == 0)
	{
		return;
	}

	// Ensure Health value does not drop below 0
	Health -= FMath::Min(Amount, Health);

	// Check if this still has health
	if (!IsAlive())
	{
		StartDeath();
	}

	SignalHealthUpdated();
}

void AMechPaperDroid::Heal(const uint8 Amount)
{
	if (Health >= MaxHealth || Amount == 0)
	{
		return;
	}

	// Ensure value does not exceed MaxHealth
	Health += FMath::Min(Amount, uint8(MaxHealth - Health));
	SignalHealthUpdated();
}

void AMechPaperDroid::SignalHealthUpdated()
{
	// Notify others that the Health value has changed
	const float NewPercentHealth = GetPercentHealth();
	OnHealthUpdated.Broadcast(NewPercentHealth);
}

void AMechPaperDroid::StartDeath()
{
	// Begins the Death sequence
	bCanBeDamaged = false;
	OnDeath.Broadcast();
}

