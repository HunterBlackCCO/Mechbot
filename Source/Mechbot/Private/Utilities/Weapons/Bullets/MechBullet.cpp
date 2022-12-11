// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Utilities/Weapons/Bullets/MechBullet.h"
#include <Droids/MechPaperDroid.h>

AMechBullet::AMechBullet()
{
	// Initialize variables with default values
	PrimaryActorTick.bCanEverTick = true;
	InitialLifeSpan = 3.0f;

	// Commented out due to unexpected behaviors
	// The below is currently set up in Blueprints but should be nativized at a future time
	/*
	// Initialize Base Component
	BaseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = BaseComponent;

	// Initialize Flipbook Component
	PaperFlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("SpriteFlipbook"));
	PaperFlipbookComponent->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	PaperFlipbookComponent->SetCollisionProfileName(FName(TEXT("NoCollision")));
	PaperFlipbookComponent->SetEnableGravity(false);
	PaperFlipbookComponent->SetupAttachment(RootComponent);

	// Initialize Capsule Component
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	CapsuleComponent->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	CapsuleComponent->SetCollisionProfileName(FName(TEXT("OverlapAll")));
	CapsuleComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CapsuleComponent->SetWorldRotation(FRotator(0, 90, 0));
	CapsuleComponent->SetupAttachment(RootComponent);

	// Initialize Projectile Movement Component
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	ProjectileMovementComponent->InitialSpeed = 400.0f;
	ProjectileMovementComponent->MaxSpeed = 400.0f;
	*/
}

void AMechBullet::OnBeginOverlap(AActor* OtherActor)
{
	// Make sure the overlapped actor is valid and not the one who spawned this
	if (OtherActor && (OtherActor != GetOwner()))
	{
		// Damage enemy targets
		if (AMechPaperDroid* Enemy = Cast<AMechPaperDroid>(OtherActor))
		{
			Enemy->TakeDamage(Damage);

			// Destroy the bullet if it can't pierce enemies
			if (!bCanPierceEnemies)
			{
				Destroy();
			}
		}
		// Destroy the bullet if it hit environment and cannot pierce it
		else if (!bCanPierceEnvironment)
		{
			Destroy();
		}
	}
}
