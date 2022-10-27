// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Droids/MechDroid.h"

// Sets default values
AMechDroid::AMechDroid()
{
	MaxHealth = 100;
	Health = MaxHealth;

 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMechDroid::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void AMechDroid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMechDroid::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AMechDroid::SpawnDroid()
{
	// TODO
}

void AMechDroid::CreateAttack()
{
	// TODO
}

void AMechDroid::UpdateHealth(const int32 Damage)
{
	if (Damage > 0)
	{
		// Harm Droid if Damage is a positive number and Droid can be damaged
		if (!bCanBeDamaged)
		{
			return;
		}

		Health = FMath::Max(Health - Damage, 0);

		if (Health > 0)
		{
			// TODO - Animate Damage
		}
		// Initiate death sequence if Health <= 0
		else
		{
			// TODO - Animate Death
			StartDeath();
		}
	}
	else if (Damage < 0)
	{
		// Heal Droid if Damage is a negative number
		Health = FMath::Min(Health - Damage, MaxHealth);
		// Animate Heal
	}
	else
	{
		// Do nothing if damage is 0
		return;
	}

	// TODO: Signal "OnHealthUpdated()" Delegate (so HUD can be updated)
}

void AMechDroid::StartDeath()
{
	// TODO
}

