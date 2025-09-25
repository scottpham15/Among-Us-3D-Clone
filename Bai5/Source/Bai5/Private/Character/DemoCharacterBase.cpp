// // Fill out your copyright notice in the Description page of Project Settings.
//
//
// #include "Character/DemoCharacterBase.h"
//
// #include "GameplayAbilitySpec.h"
// #include "GameplayAbilitySpecHandle.h"
// #include "Abilities/GameplayAbility.h"
// #include "Character/Abilities/CharacterAbilitySystemComponent.h"
// #include "Character/Abilities/CharacterGameplayAbility.h"
// #include "Components/CapsuleComponent.h"
// #include "Character/Abilities/AttributeSets/CharacterAttributeSetBase.h"
// #include "GameFramework/CharacterMovementComponent.h"
//
//
// // Sets default values
// ADemoCharacterBase::ADemoCharacterBase(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
// {
// 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
// 	PrimaryActorTick.bCanEverTick = true;
//
// 	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Overlap);
// 	
// 	bAlwaysRelevant = true;
// 	
// 	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
// 	EffectRemoveOnDeathTag = FGameplayTag::RequestGameplayTag(FName("State.RemoveOnDeath"));
// }
//
// UAbilitySystemComponent* ADemoCharacterBase::GetAbilitySystemComponent() const
// {
// 	return AbilitySystemComponent.Get();
// }
//
// bool ADemoCharacterBase::IsAlive() const
// {
// 	return GetHealth() > 0.0f;
// }
//
// int32 ADemoCharacterBase::GetAbilityLevel(DemoAbilityID AbilityID) const
// {
// 	return 1;
// }
//
// void ADemoCharacterBase::RemoveCharacterAbilities()
// {
// 	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || !AbilitySystemComponent->CharacterAbilitiesGiven)
// 	{
// 		return;
// 	}
//
// 	TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;
// 	for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
// 	{
// 		if ((Spec.SourceObject == this) && CharacterAbilities.Contains(Spec.Ability->GetClass()))
// 		{
// 			AbilitiesToRemove.Add(Spec.Handle);
// 		}
// 	}
//
// 	for (int32 i = 0; i < AbilitiesToRemove.Num(); i++)
// 	{
// 		AbilitySystemComponent->ClearAbility(AbilitiesToRemove[i]);
// 	}
//
// 	AbilitySystemComponent->CharacterAbilitiesGiven = false;
// }
// float ADemoCharacterBase::GetCharacterLevel() const
// {
// 	if (AttributeSetBase.IsValid())
// 	{
// 		return AttributeSetBase->GetLevel();
// 	}
// 	return 0.0f;
// }
//
// float ADemoCharacterBase::GetHealth() const
// {
// 	if (AttributeSetBase.IsValid())
// 	{
// 		return AttributeSetBase->GetHealth();
// 	}
// 	return 0.0f;
// }
//
// float ADemoCharacterBase::GetMana() const
// {
// 	if (AttributeSetBase.IsValid())
// 	{
// 		return AttributeSetBase->GetMana();
// 	}
// 	return 0.0f;
// }
// float ADemoCharacterBase::GetMaxHealth() const
// {
// 	if (AttributeSetBase.IsValid())
// 	{
// 		return AttributeSetBase->GetMaxHealth();
// 	}
// 	return 0.0f;
// }
//
// float ADemoCharacterBase::GetMaxMana() const
// {
// 	if (AttributeSetBase.IsValid())
// 	{
// 		return AttributeSetBase->GetMaxMana();
// 	}
// 	return 0.0f;
// }
// void ADemoCharacterBase::Die()
// {
// 	RemoveCharacterAbilities();
// 	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
// 	GetCharacterMovement()->GravityScale = 0;
// 	GetCharacterMovement()->Velocity = FVector(0);
//
// 	OnCharacterDied.Broadcast(this);
//
// 	if (AbilitySystemComponent.IsValid())
// 	{
// 		AbilitySystemComponent->CancelAbilities();
//
// 		FGameplayTagContainer EffectTagsToRemove;
// 		EffectTagsToRemove.AddTag(EffectRemoveOnDeathTag);
// 		int32 NumEffectsRemoved = AbilitySystemComponent->RemoveActiveEffectsWithTags(EffectTagsToRemove);
// 		AbilitySystemComponent->AddLooseGameplayTag(DeadTag);
// 	}
//
// 	if (DeathMontage)
// 	{
// 		PlayAnimMontage(DeathMontage);
// 	}
// 	else
// 	{
// 		FinishDying();
// 	}
// }
//
//
// void ADemoCharacterBase::FinishDying()
// {
// 	Destroy();
// }
//
// // Called when the game starts or when spawned
// void ADemoCharacterBase::BeginPlay()
// {
// 	Super::BeginPlay();
// 	
// }
//
// void ADemoCharacterBase::AddCharacterAbilities()
// {
// 	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || AbilitySystemComponent->CharacterAbilitiesGiven)
// 	{
// 		return;
// 	}
//
// 	for (TSubclassOf<UCharacterGameplayAbility>& StartupAbility : CharacterAbilities)
// 	{
// 		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(StartupAbility, GetAbilityLevel(StartupAbility.GetDefaultObject()->AbilityID), static_cast<int32>(StartupAbility.GetDefaultObject()->AbilityInputID), this));
// 	}
//
// 	AbilitySystemComponent->CharacterAbilitiesGiven = true;
// }
//
// void ADemoCharacterBase::InitializeAttributes()
// {
// 	if(!AbilitySystemComponent.IsValid())
// 	{
// 		return;
// 	}
// 	if(!DefaultAttributes)
// 	{
// 		UE_LOG(LogTemp, Error, TEXT("%s() Missing DefaltAttributes for %s. Please fill in the character's Blueprints"),*FString(__FUNCTION__), *GetName());
// 		return;
// 	}
//
// 	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
// 	EffectContext.AddSourceObject(this);
//
// 	FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributes, GetCharacterLevel(), EffectContext);
// 	if (NewHandle.IsValid())
// 	{
// 		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget (*NewHandle.Data.Get(), AbilitySystemComponent.Get());
// 	}
// }
//
// void ADemoCharacterBase::AddStartupEffects()
// {
// 	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || AbilitySystemComponent->StartupEffectApplied)
// 	{
// 		return;
// 	}
//
// 	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
// 	EffectContext.AddSourceObject(this);
//
// 	for (TSubclassOf<UGameplayEffect> GameplayEffect : StartupEffects)
// 	{
// 		FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, GetCharacterLevel(), EffectContext);
// 		if (NewHandle.IsValid())
// 		{
// 			FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget (*NewHandle.Data.Get(), AbilitySystemComponent.Get());
// 		}
// 	}
// 	AbilitySystemComponent->StartupEffectApplied = true;
// }
//
// void ADemoCharacterBase::SetHealth(float Health)
// {
// 	if (AttributeSetBase.IsValid())
// 	{
// 		AttributeSetBase->SetHealth(Health);
// 	}
// }
//
// void ADemoCharacterBase::SetMana(float Mana)
// {
// 	if (AttributeSetBase.IsValid())
// 	{
// 		AttributeSetBase->SetMana(Mana);
// 	}
// }
//
// // // Called every frame
// // void ADemoCharacterBase::Tick(float DeltaTime)
// // {
// // 	Super::Tick(DeltaTime);
// // }
// //
// // // Called to bind functionality to input
// // void ADemoCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
// // {
// // 	Super::SetupPlayerInputComponent(PlayerInputComponent);
// // }
//
//
//
