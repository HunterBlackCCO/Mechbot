// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Utilities/MechUtility.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AMechUtility::AMechUtility()
{
	MainActivationSFXPitch = 1.0f;
	SpecialActivationSFXPitch = 1.0f;
	SpecialEnergyCost = 5;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
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

void AMechUtility::ActivateMainAbility()
{
	UGameplayStatics::SpawnSound2D(GetWorld(), MainActivationSFX, 0.7f, MainActivationSFXPitch);
}

void AMechUtility::ActivateSpecialAbility()
{
	// The check for a Player having enough energy to use the Utility should be done in the Player class
	UGameplayStatics::SpawnSound2D(GetWorld(), SpecialActivationSFX, 0.7f, SpecialActivationSFXPitch);
}

void AMechUtility::GiveToPlayer(AActor* OtherActor)
{
	if (OtherActor)
	{
		// Hide the utility's in-world mesh and collision
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
		SetOwner(OtherActor);
	}
}
