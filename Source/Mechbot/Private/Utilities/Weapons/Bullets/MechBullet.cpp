// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Utilities/Weapons/Bullets/MechBullet.h"
#include <Droids/MechPaperDroid.h>

// Sets default values
AMechBullet::AMechBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	InitialLifeSpan = 3.0f;
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

// Called when the game starts or when spawned
void AMechBullet::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMechBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMechBullet::OnBeginOverlap(AActor* OtherActor)
{
	if (OtherActor && (OtherActor != GetOwner()))
	{
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
