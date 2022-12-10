// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Droids/MechPaperDroid.h"

// Sets default values
AMechPaperDroid::AMechPaperDroid()
{
	MaxHealth = 100;
	Health = MaxHealth;

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMechPaperDroid::BeginPlay()
{
	Super::BeginPlay();

	bCanAttack = true;
	bCanBeDamaged = true;
	bCanMove = true;
	Health = MaxHealth;
}

void AMechPaperDroid::TakeDamage(const uint8 Amount)
{
	if (!bCanBeDamaged || Amount == 0)
	{
		return;
	}

	// Ensure value does not drop below 0
	Health -= FMath::Min(Amount, Health);

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
	const float NewPercentHealth = GetPercentHealth();
	OnHealthUpdated.Broadcast(NewPercentHealth);
}

void AMechPaperDroid::StartDeath()
{
	bCanBeDamaged = false;
	// TODO - Destroy Collision, Start Death Animation, then OnAnimationFinished, Destroy Actor
	OnDeath.Broadcast();
}

