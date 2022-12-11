// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Utilities/MechUtility.h"
#include <Kismet/GameplayStatics.h>

AMechUtility::AMechUtility()
{
	// Initialize variables with default values
	MainActivationSFXPitch = 1.0f;
	SpecialActivationSFXPitch = 1.0f;
	SpecialEnergyCost = 5;
	PrimaryActorTick.bCanEverTick = true;

	// Initialize Base Component
	BaseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = BaseComponent;

	// Initialize Flipbook Component
	PaperSpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	PaperSpriteComponent->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	PaperSpriteComponent->SetCollisionProfileName(FName(TEXT("NoCollision")));
	PaperSpriteComponent->SetEnableGravity(false);
	PaperSpriteComponent->SetupAttachment(RootComponent);

	// Initialize Capsule Component
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	BoxComponent->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	BoxComponent->SetCollisionProfileName(FName(TEXT("OverlapAll")));
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxComponent->SetupAttachment(RootComponent);
}

void AMechUtility::ActivateMainAbility()
{
	// Child classes will handle main functionality
	UGameplayStatics::SpawnSound2D(GetWorld(), MainActivationSFX, 0.7f, MainActivationSFXPitch);
}

void AMechUtility::ActivateSpecialAbility()
{
	// The check for a Player having enough energy to use the Utility should be done in the Player class
	// Child classes will handle main functionality
	UGameplayStatics::SpawnSound2D(GetWorld(), SpecialActivationSFX, 0.7f, SpecialActivationSFXPitch);
}

void AMechUtility::GiveToPlayer(AActor* OtherActor)
{
	// Child classes will handle main functionality
	if (OtherActor)
	{
		// Hide the utility's in-world mesh and collision
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
		SetOwner(OtherActor);
	}
}
