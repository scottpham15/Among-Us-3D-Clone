// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bai5/Bai5Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBai5Character() {}

// Begin Cross Module References
BAI5_API UClass* Z_Construct_UClass_ABai5Character();
BAI5_API UClass* Z_Construct_UClass_ABai5Character_NoRegister();
BAI5_API UClass* Z_Construct_UClass_ADeadBody_NoRegister();
BAI5_API UClass* Z_Construct_UClass_UCharacterAttributeSetBase_NoRegister();
BAI5_API UFunction* Z_Construct_UDelegateFunction_Bai5_CheckEndGame__DelegateSignature();
BAI5_API UFunction* Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature();
BAI5_API UFunction* Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature();
BAI5_API UFunction* Z_Construct_UDelegateFunction_Bai5_OnDeadBodySpawn__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bai5();
// End Cross Module References

// Begin Delegate FDestroyComponent
struct Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics
{
	struct _Script_Bai5_eventDestroyComponent_Parms
	{
		ADeadBody* DeadBodyDes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadBodyDes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::NewProp_DeadBodyDes = { "DeadBodyDes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Bai5_eventDestroyComponent_Parms, DeadBodyDes), Z_Construct_UClass_ADeadBody_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::NewProp_DeadBodyDes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Bai5, nullptr, "DestroyComponent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::_Script_Bai5_eventDestroyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::_Script_Bai5_eventDestroyComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDestroyComponent_DelegateWrapper(const FMulticastScriptDelegate& DestroyComponent, ADeadBody* DeadBodyDes)
{
	struct _Script_Bai5_eventDestroyComponent_Parms
	{
		ADeadBody* DeadBodyDes;
	};
	_Script_Bai5_eventDestroyComponent_Parms Parms;
	Parms.DeadBodyDes=DeadBodyDes;
	DestroyComponent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDestroyComponent

// Begin Delegate FEndDestroyComponent
struct Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics
{
	struct _Script_Bai5_eventEndDestroyComponent_Parms
	{
		ADeadBody* EndDeadBodyDes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndDeadBodyDes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::NewProp_EndDeadBodyDes = { "EndDeadBodyDes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Bai5_eventEndDestroyComponent_Parms, EndDeadBodyDes), Z_Construct_UClass_ADeadBody_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::NewProp_EndDeadBodyDes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Bai5, nullptr, "EndDestroyComponent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::_Script_Bai5_eventEndDestroyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::_Script_Bai5_eventEndDestroyComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEndDestroyComponent_DelegateWrapper(const FMulticastScriptDelegate& EndDestroyComponent, ADeadBody* EndDeadBodyDes)
{
	struct _Script_Bai5_eventEndDestroyComponent_Parms
	{
		ADeadBody* EndDeadBodyDes;
	};
	_Script_Bai5_eventEndDestroyComponent_Parms Parms;
	Parms.EndDeadBodyDes=EndDeadBodyDes;
	EndDestroyComponent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEndDestroyComponent

// Begin Delegate FOnDeadBodySpawn
struct Z_Construct_UDelegateFunction_Bai5_OnDeadBodySpawn__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Bai5_OnDeadBodySpawn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Bai5, nullptr, "OnDeadBodySpawn__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_OnDeadBodySpawn__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Bai5_OnDeadBodySpawn__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Bai5_OnDeadBodySpawn__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Bai5_OnDeadBodySpawn__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeadBodySpawn_DelegateWrapper(const FMulticastScriptDelegate& OnDeadBodySpawn)
{
	OnDeadBodySpawn.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDeadBodySpawn

// Begin Delegate FCheckEndGame
struct Z_Construct_UDelegateFunction_Bai5_CheckEndGame__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Bai5_CheckEndGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Bai5, nullptr, "CheckEndGame__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_CheckEndGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Bai5_CheckEndGame__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Bai5_CheckEndGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Bai5_CheckEndGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCheckEndGame_DelegateWrapper(const FMulticastScriptDelegate& CheckEndGame)
{
	CheckEndGame.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FCheckEndGame

// Begin Class ABai5Character Function OnRep_DeadColor
struct Z_Construct_UFunction_ABai5Character_OnRep_DeadColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABai5Character_OnRep_DeadColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABai5Character, nullptr, "OnRep_DeadColor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABai5Character_OnRep_DeadColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABai5Character_OnRep_DeadColor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABai5Character_OnRep_DeadColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABai5Character_OnRep_DeadColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABai5Character::execOnRep_DeadColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DeadColor();
	P_NATIVE_END;
}
// End Class ABai5Character Function OnRep_DeadColor

// Begin Class ABai5Character Function OnRep_IsDead
struct Z_Construct_UFunction_ABai5Character_OnRep_IsDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABai5Character_OnRep_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABai5Character, nullptr, "OnRep_IsDead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABai5Character_OnRep_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABai5Character_OnRep_IsDead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABai5Character_OnRep_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABai5Character_OnRep_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABai5Character::execOnRep_IsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsDead();
	P_NATIVE_END;
}
// End Class ABai5Character Function OnRep_IsDead

// Begin Class ABai5Character Function OnRep_KillByVote
struct Z_Construct_UFunction_ABai5Character_OnRep_KillByVote_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABai5Character_OnRep_KillByVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABai5Character, nullptr, "OnRep_KillByVote", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABai5Character_OnRep_KillByVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABai5Character_OnRep_KillByVote_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABai5Character_OnRep_KillByVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABai5Character_OnRep_KillByVote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABai5Character::execOnRep_KillByVote)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_KillByVote();
	P_NATIVE_END;
}
// End Class ABai5Character Function OnRep_KillByVote

// Begin Class ABai5Character Function ServerOnDead
struct Bai5Character_eventServerOnDead_Parms
{
	FVector Loc;
};
static FName NAME_ABai5Character_ServerOnDead = FName(TEXT("ServerOnDead"));
void ABai5Character::ServerOnDead(FVector Loc)
{
	Bai5Character_eventServerOnDead_Parms Parms;
	Parms.Loc=Loc;
	ProcessEvent(FindFunctionChecked(NAME_ABai5Character_ServerOnDead),&Parms);
}
struct Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Loc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics::NewProp_Loc = { "Loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bai5Character_eventServerOnDead_Parms, Loc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics::NewProp_Loc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABai5Character, nullptr, "ServerOnDead", nullptr, nullptr, Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics::PropPointers), sizeof(Bai5Character_eventServerOnDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Bai5Character_eventServerOnDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABai5Character_ServerOnDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABai5Character_ServerOnDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABai5Character::execServerOnDead)
{
	P_GET_STRUCT(FVector,Z_Param_Loc);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerOnDead_Implementation(Z_Param_Loc);
	P_NATIVE_END;
}
// End Class ABai5Character Function ServerOnDead

// Begin Class ABai5Character
void ABai5Character::StaticRegisterNativesABai5Character()
{
	UClass* Class = ABai5Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_DeadColor", &ABai5Character::execOnRep_DeadColor },
		{ "OnRep_IsDead", &ABai5Character::execOnRep_IsDead },
		{ "OnRep_KillByVote", &ABai5Character::execOnRep_KillByVote },
		{ "ServerOnDead", &ABai5Character::execServerOnDead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABai5Character);
UClass* Z_Construct_UClass_ABai5Character_NoRegister()
{
	return ABai5Character::StaticClass();
}
struct Z_Construct_UClass_ABai5Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bai5Character.h" },
		{ "ModuleRelativePath", "Bai5Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Bai5Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Bai5Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Bai5Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Bai5Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsGhost_MetaData[] = {
		{ "Category", "Bai5Character" },
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsGhostByVote_MetaData[] = {
		{ "Category", "Bai5Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ReplicatedUsing = OnRep_KillByVote\n" },
#endif
		{ "ModuleRelativePath", "Bai5Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ReplicatedUsing = OnRep_KillByVote" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ghosts_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimGhost_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadBody_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadMat_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadColor_MetaData[] = {
		{ "Category", "Bai5Character" },
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadLoc_MetaData[] = {
		{ "Category", "Bai5Character" },
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpawnedDeadBody_MetaData[] = {
		{ "Category", "Bai5Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//, Category = \"State\", meta = (AllowPrivateAccess = \"true\"))\n" },
#endif
		{ "ModuleRelativePath", "Bai5Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", Category = \"State\", meta = (AllowPrivateAccess = \"true\"))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundDeadBody_MetaData[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFoundDeadBody_MetaData[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadBodySpawn_MetaData[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckEndGame_MetaData[] = {
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadBodies_MetaData[] = {
		{ "Category", "Bai5Character" },
		{ "ModuleRelativePath", "Bai5Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bai5Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bai5Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicAttributeSet;
	static void NewProp_IsGhost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGhost;
	static void NewProp_IsGhostByVote_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGhostByVote;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ghosts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimGhost;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeadBody;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadMat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeadColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeadLoc;
	static void NewProp_bHasSpawnedDeadBody_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpawnedDeadBody;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FoundDeadBody;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndFoundDeadBody;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeadBodySpawn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CheckEndGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadBodies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeadBodies;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABai5Character_OnRep_DeadColor, "OnRep_DeadColor" }, // 329581241
		{ &Z_Construct_UFunction_ABai5Character_OnRep_IsDead, "OnRep_IsDead" }, // 364199108
		{ &Z_Construct_UFunction_ABai5Character_OnRep_KillByVote, "OnRep_KillByVote" }, // 1011278121
		{ &Z_Construct_UFunction_ABai5Character_ServerOnDead, "ServerOnDead" }, // 1977235306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABai5Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_BasicAttributeSet = { "BasicAttributeSet", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, BasicAttributeSet), Z_Construct_UClass_UCharacterAttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicAttributeSet_MetaData), NewProp_BasicAttributeSet_MetaData) };
void Z_Construct_UClass_ABai5Character_Statics::NewProp_IsGhost_SetBit(void* Obj)
{
	((ABai5Character*)Obj)->IsGhost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_IsGhost = { "IsGhost", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABai5Character), &Z_Construct_UClass_ABai5Character_Statics::NewProp_IsGhost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsGhost_MetaData), NewProp_IsGhost_MetaData) };
void Z_Construct_UClass_ABai5Character_Statics::NewProp_IsGhostByVote_SetBit(void* Obj)
{
	((ABai5Character*)Obj)->IsGhostByVote = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_IsGhostByVote = { "IsGhostByVote", "OnRep_KillByVote", (EPropertyFlags)0x0010000100000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABai5Character), &Z_Construct_UClass_ABai5Character_Statics::NewProp_IsGhostByVote_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsGhostByVote_MetaData), NewProp_IsGhostByVote_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_Ghosts = { "Ghosts", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, Ghosts), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ghosts_MetaData), NewProp_Ghosts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_AnimGhost = { "AnimGhost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, AnimGhost), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimGhost_MetaData), NewProp_AnimGhost_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadBody = { "DeadBody", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, DeadBody), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadBody_MetaData), NewProp_DeadBody_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadMat = { "DeadMat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, DeadMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadMat_MetaData), NewProp_DeadMat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadColor = { "DeadColor", "OnRep_DeadColor", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, DeadColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadColor_MetaData), NewProp_DeadColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadLoc = { "DeadLoc", "OnRep_IsDead", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, DeadLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadLoc_MetaData), NewProp_DeadLoc_MetaData) };
void Z_Construct_UClass_ABai5Character_Statics::NewProp_bHasSpawnedDeadBody_SetBit(void* Obj)
{
	((ABai5Character*)Obj)->bHasSpawnedDeadBody = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_bHasSpawnedDeadBody = { "bHasSpawnedDeadBody", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABai5Character), &Z_Construct_UClass_ABai5Character_Statics::NewProp_bHasSpawnedDeadBody_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSpawnedDeadBody_MetaData), NewProp_bHasSpawnedDeadBody_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_FoundDeadBody = { "FoundDeadBody", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, FoundDeadBody), Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundDeadBody_MetaData), NewProp_FoundDeadBody_MetaData) }; // 3018756824
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_EndFoundDeadBody = { "EndFoundDeadBody", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, EndFoundDeadBody), Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFoundDeadBody_MetaData), NewProp_EndFoundDeadBody_MetaData) }; // 2972745647
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadBodySpawn = { "DeadBodySpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, DeadBodySpawn), Z_Construct_UDelegateFunction_Bai5_OnDeadBodySpawn__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadBodySpawn_MetaData), NewProp_DeadBodySpawn_MetaData) }; // 2689876351
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_CheckEndGame = { "CheckEndGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, CheckEndGame), Z_Construct_UDelegateFunction_Bai5_CheckEndGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckEndGame_MetaData), NewProp_CheckEndGame_MetaData) }; // 2779409972
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadBodies_Inner = { "DeadBodies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADeadBody_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadBodies = { "DeadBodies", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, DeadBodies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadBodies_MetaData), NewProp_DeadBodies_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABai5Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABai5Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABai5Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_BasicAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_IsGhost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_IsGhostByVote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_Ghosts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_AnimGhost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_bHasSpawnedDeadBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_FoundDeadBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_EndFoundDeadBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadBodySpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_CheckEndGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadBodies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_DeadBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABai5Character_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABai5Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABai5Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Bai5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABai5Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABai5Character_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ABai5Character, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABai5Character_Statics::ClassParams = {
	&ABai5Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABai5Character_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABai5Character_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABai5Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ABai5Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABai5Character()
{
	if (!Z_Registration_Info_UClass_ABai5Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABai5Character.OuterSingleton, Z_Construct_UClass_ABai5Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABai5Character.OuterSingleton;
}
template<> BAI5_API UClass* StaticClass<ABai5Character>()
{
	return ABai5Character::StaticClass();
}
void ABai5Character::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_IsGhost(TEXT("IsGhost"));
	static const FName Name_IsGhostByVote(TEXT("IsGhostByVote"));
	static const FName Name_DeadColor(TEXT("DeadColor"));
	static const FName Name_DeadLoc(TEXT("DeadLoc"));
	const bool bIsValid = true
		&& Name_IsGhost == ClassReps[(int32)ENetFields_Private::IsGhost].Property->GetFName()
		&& Name_IsGhostByVote == ClassReps[(int32)ENetFields_Private::IsGhostByVote].Property->GetFName()
		&& Name_DeadColor == ClassReps[(int32)ENetFields_Private::DeadColor].Property->GetFName()
		&& Name_DeadLoc == ClassReps[(int32)ENetFields_Private::DeadLoc].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABai5Character"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABai5Character);
ABai5Character::~ABai5Character() {}
// End Class ABai5Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Bai5Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABai5Character, ABai5Character::StaticClass, TEXT("ABai5Character"), &Z_Registration_Info_UClass_ABai5Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABai5Character), 3769818223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Bai5Character_h_1545102965(TEXT("/Script/Bai5"),
	Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Bai5Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Bai5Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
