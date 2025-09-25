// // Fill out your copyright notice in the Description page of Project Settings.
//
// #pragma once
//
// #include "CoreMinimal.h"
// #include "AbilitySystemComponent.h"
// #include "CharacterAbilitySystemComponent.generated.h"
//
// DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FReceiveDamageDelegate, UCharacterAbilitySystemComponent*, SourceASC, float, UnmitigateDamage, float, MitigateDamage);
//
// UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
// class BAI5_API UCharacterAbilitySystemComponent : public UAbilitySystemComponent
// {
// 	GENERATED_BODY()
//
// public:
// 	// Sets default values for this component's properties
// 	UCharacterAbilitySystemComponent();
//
// 	bool CharacterAbilitiesGiven = false;
// 	bool StartupEffectApplied = false;
//
// 	FReceiveDamageDelegate ReceivedDamage;
//
// 	virtual void ReceiveDamage(UCharacterAbilitySystemComponent* SourceASC, float UnmitigateDamage, float MitigateDamage);
// protected:
// 	// Called when the game starts
// 	virtual void BeginPlay() override;
//
// public:
// 	// Called every frame
// 	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
// 	                           FActorComponentTickFunction* ThisTickFunction) override;
// };
