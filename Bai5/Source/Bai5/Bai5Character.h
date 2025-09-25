// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "AbilitySystemInterface.h"
#include "Character/Abilities/AttributeSets/CharacterAttributeSetBase.h"
#include "Bai5Character.generated.h"

class UBasicAttributeSet;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestroyComponent, ADeadBody*, DeadBodyDes);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndDestroyComponent, ADeadBody*, EndDeadBodyDes);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeadBodySpawn);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCheckEndGame);
//DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);


UCLASS(Config=Game)

class ABai5Character : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;
public:
	ABai5Character();

	virtual void PossessedBy(AController* NewController) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS", meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* AbilitySystemComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS", meta = (AllowPrivateAccess = "true"))
	UCharacterAttributeSetBase* BasicAttributeSet;
	
	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override
	{
		return AbilitySystemComponent;
	}

	void SetupACS();
	
	void DeadBodyReported(ADeadBody* DeadBodyDes);

	void EndDeadBodyReported(ADeadBody* EndDeadBodyDes);
	
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Replicated)
	bool IsGhost = false;

//ReplicatedUsing = OnRep_KillByVote
	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = OnRep_KillByVote)
	bool IsGhostByVote = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class USkeletalMesh* Ghosts;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UAnimSequence* AnimGhost;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TSubclassOf<AActor> DeadBody;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UMaterial* DeadMat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DeadColor)
	FLinearColor DeadColor;

	UFUNCTION()
	void OnRep_DeadColor();
	
	UFUNCTION()
	void OnRep_IsDead();

	UFUNCTION()
	void OnRep_KillByVote();
	
	UFUNCTION(Server, Unreliable)
	void ServerOnDead(FVector Loc);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_IsDead)
	FVector DeadLoc;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)//, Category = "State", meta = (AllowPrivateAccess = "true"))
	bool bHasSpawnedDeadBody = false;
	
	UPROPERTY(BlueprintAssignable)
	FDestroyComponent FoundDeadBody;

	UPROPERTY(BlueprintAssignable)
	FEndDestroyComponent EndFoundDeadBody;

	UPROPERTY(BlueprintAssignable)
	FOnDeadBodySpawn DeadBodySpawn;
	
	UPROPERTY(BlueprintAssignable)
	FCheckEndGame CheckEndGame;

	UPROPERTY(BlueprintReadOnly)
	TArray<ADeadBody*> DeadBodies;
protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay() override;

	void OnHealthChange(const FOnAttributeChangeData& Data);
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
};

