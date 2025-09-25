// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bai5Character.h"

#include "Bai5PlayerController.h"
#include "DeadBody.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "Character/GASController.h"
#include "Character/Abilities/AttributeSets/CharacterAttributeSetBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"


DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ABai5Character::ABai5Character()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	
	BasicAttributeSet = CreateDefaultSubobject<UCharacterAttributeSetBase>(TEXT("BasicAttributeSet"));
	
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	
}

void ABai5Character::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

void ABai5Character::SetupACS()
{
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(BasicAttributeSet->GetHealthAttribute()).AddUObject(this, &ABai5Character::OnHealthChange);
}

void ABai5Character::DeadBodyReported(ADeadBody* DeadBodyDes)
{
	if(!IsGhost)
	FoundDeadBody.Broadcast(DeadBodyDes);
}

void ABai5Character::EndDeadBodyReported(ADeadBody* EndDeadBodyDes)
{
	if(!IsGhost)
	EndFoundDeadBody.Broadcast(EndDeadBodyDes);
}

void ABai5Character::OnRep_DeadColor()
{
	DeadBodySpawn.Broadcast();
}

void ABai5Character::OnRep_IsDead()
{
	if (!IsValid(GetController())) // ai day khac bien thanh ma
	{
		APlayerController* LocalController = UGameplayStatics::GetPlayerControllerFromID(GetWorld(), 0);
		const bool IsLocalControllerValid = IsValid(LocalController);
		bool IsLocalGhost = false;
		if (IsLocalControllerValid && IsValid(LocalController->GetPawn()))
			IsLocalGhost = Cast<ABai5Character>(LocalController->GetPawn())->IsGhost;
		
		if (IsLocalControllerValid && IsLocalGhost)
		{
			//UKismetSystemLibrary::PrintString(this, this->GetName());
			SetActorHiddenInGame(false); // se hien hinh
		}
		else
		{
			//UKismetSystemLibrary::PrintString(this, this->GetName());
			SetActorHiddenInGame(true); // se bi tang hinh
		}
	}
	else // neu day la luc minh bi bien thanh ma
	{
		for (auto Temp: GetWorld()->GetGameState()->PlayerArray)
		{
			ABai5Character* Ghost = Cast<ABai5Character>(Temp->GetPawn());
			Ghost->SetActorHiddenInGame(false); // tat ca ma khac hien hinh
		}
	}
	
	// Thiết lập ngoại hình của "ma"
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("ThroughWall"));
	GetMesh()->SetSkeletalMesh(Ghosts);
	GetMesh()->SetRelativeLocation({0.f, 258.4f, -74.7f});
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	GetMesh()->SetAnimation(AnimGhost);
	GetMesh()->Play(true);
	GetMesh()->SetMaterial(0, DeadMat);
	GetCharacterMovement()->MaxWalkSpeed = 450.f;
}

void ABai5Character::OnRep_KillByVote()
{
	if (!IsValid(GetController())) // ai day khac bien thanh ma
	{
		APlayerController* LocalController = UGameplayStatics::GetPlayerControllerFromID(GetWorld(), 0);
		const bool IsLocalControllerValid = IsValid(LocalController);
		bool IsLocalGhost = false;
		if (IsLocalControllerValid && IsValid(LocalController->GetPawn()))
			IsLocalGhost = Cast<ABai5Character>(LocalController->GetPawn())->IsGhost;
		if (IsLocalControllerValid && IsLocalGhost)
		{
			SetActorHiddenInGame(false); // se hien hinh
		}
		else
		{
			SetActorHiddenInGame(true); // se bi tang hinh
		}
	}
	else // neu day la luc minh bi bien thanh ma
	{
		for (auto Temp: GetWorld()->GetGameState()->PlayerArray)
		{
			ABai5Character* Ghost = Cast<ABai5Character>(Temp->GetPawn());
			Ghost->SetActorHiddenInGame(false); // tat ca ma khac hien hinh
		}
	}
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("ThroughWall"));
    GetMesh()->SetSkeletalMesh(Ghosts);
    GetMesh()->SetRelativeLocation({0.f, 258.4f, -74.7f});
    GetMesh()->SetAnimationMode(EAnimationMode::AnimationSingleNode);
    GetMesh()->SetAnimation(AnimGhost);
    GetMesh()->Play(true);
    GetMesh()->SetMaterial(0, DeadMat);
	GetCharacterMovement()->MaxWalkSpeed = 450.f;
	
	
}

void ABai5Character::ServerOnDead_Implementation(FVector Loc)
{
	DeadLoc = Loc;
	IsGhost = true;
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("ThroughWall"));
	if (!bHasSpawnedDeadBody)
	{
		bHasSpawnedDeadBody = true; 
		FTransform Temp = GetActorTransform();
		Temp.SetLocation(DeadLoc);
		ADeadBody* SpawnedBody = Cast<ADeadBody>(GetWorld()->SpawnActor<AActor>(DeadBody, Temp));
		SpawnedBody->Color = DeadColor;
		DeadBodies.Add(SpawnedBody);
	}
	GetMesh()->SetSkeletalMesh(Ghosts);
	GetMesh()->SetRelativeLocation({0.f, 258.4f, -74.7f});
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	GetMesh()->SetAnimation(AnimGhost);
	GetMesh()->Play(true);
	GetMesh()->SetMaterial(0, DeadMat);
	GetCharacterMovement()->MaxWalkSpeed = 450.f;
	CheckEndGame.Broadcast();
}

void ABai5Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ABai5Character::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ABai5Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABai5Character::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABai5Character::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}
void ABai5Character::BeginPlay()
{
	Super::BeginPlay();
}

void ABai5Character::OnHealthChange(const FOnAttributeChangeData& Data)
{
	//UKismetSystemLibrary::PrintString(this, GetActorLocation().ToString());
	FVector LocSend = GetActorLocation();
	LocSend.Z = 120.f;
	ServerOnDead(LocSend);
}

void ABai5Character::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABai5Character, DeadLoc);
	DOREPLIFETIME(ABai5Character, IsGhost);
	DOREPLIFETIME(ABai5Character, IsGhostByVote);
	DOREPLIFETIME(ABai5Character, DeadColor);
	
}

void ABai5Character::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (AbilitySystemComponent)
	{
		SetupACS();
		BasicAttributeSet->InitHealth(100);
	}

	// ASC MixedMode replication requires that the ASC Owner's Owner be the Controller.
	SetOwner(NewController);
}




