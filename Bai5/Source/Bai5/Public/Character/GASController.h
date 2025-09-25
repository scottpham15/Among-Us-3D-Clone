// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyCanvas.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "GASController.generated.h"
struct FInputActionValue;

class UInputMappingContext;
class UInputAction;
/**
 * 
 */
USTRUCT(BlueprintType, Blueprintable)
struct FMiniEle
{
	GENERATED_BODY()
	float Center_X, Center_Y, A1, B1, C1, A2, B2, C2;
	int Sign1;
	float PlayerSide;
	FVector WallStart, WallNormal;
};

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS()
class BAI5_API AGASController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AGASController();
	virtual void AcknowledgePossession(class APawn* P) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefautMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	void OnMove(const FInputActionValue& Value);
	virtual void SetupInputComponent() override;

	const int Max = 100;
	bool FoW[100][100];
	bool Change[100][100];

	UPROPERTY(EditAnywhere)
	float FixedSize;

	UPROPERTY()
	AMyCanvas* MyCanvass;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UTexture2D* WhiteTexture;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UTexture2D* BlackTexture;

	FVector NewPosition, OldPosition;
protected:
	uint32 bMoveToMouseCursor : 1;

	// To add mapping context
	virtual void BeginPlay();

	virtual void Tick(float DeltaSeconds) override;

private:
	bool bIsTouch; // Is it a touch device
	float FollowTime; // For how long it has been pressed
};
