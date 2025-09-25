// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bai5/UMinimapSubsystemAmongUs.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMinimapSubsystemAmongUs() {}

// Begin Cross Module References
BAI5_API UClass* Z_Construct_UClass_UUMinimapSubsystemAmongUs();
BAI5_API UClass* Z_Construct_UClass_UUMinimapSubsystemAmongUs_NoRegister();
BAI5_API UFunction* Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature();
BAI5_API UFunction* Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature();
BAI5_API UScriptStruct* Z_Construct_UScriptStruct_FMiniEntry();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bai5();
// End Cross Module References

// Begin ScriptStruct FMiniEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MiniEntry;
class UScriptStruct* FMiniEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MiniEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MiniEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniEntry, (UObject*)Z_Construct_UPackage__Script_Bai5(), TEXT("MiniEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MiniEntry.OuterSingleton;
}
template<> BAI5_API UScriptStruct* StaticStruct<FMiniEntry>()
{
	return FMiniEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMiniEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "MiniEntry" },
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStatic_MetaData[] = {
		{ "Category", "MiniEntry" },
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "MiniEntry" },
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_bIsStatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStatic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMiniEntry_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMiniEntry, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
void Z_Construct_UScriptStruct_FMiniEntry_Statics::NewProp_bIsStatic_SetBit(void* Obj)
{
	((FMiniEntry*)Obj)->bIsStatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniEntry_Statics::NewProp_bIsStatic = { "bIsStatic", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMiniEntry), &Z_Construct_UScriptStruct_FMiniEntry_Statics::NewProp_bIsStatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStatic_MetaData), NewProp_bIsStatic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMiniEntry_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMiniEntry, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniEntry_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniEntry_Statics::NewProp_bIsStatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniEntry_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Bai5,
	nullptr,
	&NewStructOps,
	"MiniEntry",
	Z_Construct_UScriptStruct_FMiniEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniEntry_Statics::PropPointers),
	sizeof(FMiniEntry),
	alignof(FMiniEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMiniEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMiniEntry()
{
	if (!Z_Registration_Info_UScriptStruct_MiniEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MiniEntry.InnerSingleton, Z_Construct_UScriptStruct_FMiniEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MiniEntry.InnerSingleton;
}
// End ScriptStruct FMiniEntry

// Begin Delegate FNewMinimapEntry
struct Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics
{
	struct _Script_Bai5_eventNewMinimapEntry_Parms
	{
		FMiniEntry Entry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Bai5_eventNewMinimapEntry_Parms, Entry), Z_Construct_UScriptStruct_FMiniEntry, METADATA_PARAMS(0, nullptr) }; // 1690218711
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::NewProp_Entry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Bai5, nullptr, "NewMinimapEntry__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::_Script_Bai5_eventNewMinimapEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::_Script_Bai5_eventNewMinimapEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNewMinimapEntry_DelegateWrapper(const FMulticastScriptDelegate& NewMinimapEntry, FMiniEntry Entry)
{
	struct _Script_Bai5_eventNewMinimapEntry_Parms
	{
		FMiniEntry Entry;
	};
	_Script_Bai5_eventNewMinimapEntry_Parms Parms;
	Parms.Entry=Entry;
	NewMinimapEntry.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNewMinimapEntry

// Begin Delegate FMinimapEntryRemove
struct Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics
{
	struct _Script_Bai5_eventMinimapEntryRemove_Parms
	{
		AActor* Entry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Bai5_eventMinimapEntryRemove_Parms, Entry), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::NewProp_Entry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Bai5, nullptr, "MinimapEntryRemove__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::_Script_Bai5_eventMinimapEntryRemove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::_Script_Bai5_eventMinimapEntryRemove_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMinimapEntryRemove_DelegateWrapper(const FMulticastScriptDelegate& MinimapEntryRemove, AActor* Entry)
{
	struct _Script_Bai5_eventMinimapEntryRemove_Parms
	{
		AActor* Entry;
	};
	_Script_Bai5_eventMinimapEntryRemove_Parms Parms;
	Parms.Entry=Entry;
	MinimapEntryRemove.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMinimapEntryRemove

// Begin Class UUMinimapSubsystemAmongUs Function GetAllCurrentEntries
struct Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics
{
	struct UMinimapSubsystemAmongUs_eventGetAllCurrentEntries_Parms
	{
		TArray<FMiniEntry> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMiniEntry, METADATA_PARAMS(0, nullptr) }; // 1690218711
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapSubsystemAmongUs_eventGetAllCurrentEntries_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1690218711
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMinimapSubsystemAmongUs, nullptr, "GetAllCurrentEntries", nullptr, nullptr, Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::UMinimapSubsystemAmongUs_eventGetAllCurrentEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::UMinimapSubsystemAmongUs_eventGetAllCurrentEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUMinimapSubsystemAmongUs::execGetAllCurrentEntries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMiniEntry>*)Z_Param__Result=P_THIS->GetAllCurrentEntries();
	P_NATIVE_END;
}
// End Class UUMinimapSubsystemAmongUs Function GetAllCurrentEntries

// Begin Class UUMinimapSubsystemAmongUs Function GetMainCharacterEntry
struct Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics
{
	struct UMinimapSubsystemAmongUs_eventGetMainCharacterEntry_Parms
	{
		FMiniEntry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapSubsystemAmongUs_eventGetMainCharacterEntry_Parms, ReturnValue), Z_Construct_UScriptStruct_FMiniEntry, METADATA_PARAMS(0, nullptr) }; // 1690218711
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMinimapSubsystemAmongUs, nullptr, "GetMainCharacterEntry", nullptr, nullptr, Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::UMinimapSubsystemAmongUs_eventGetMainCharacterEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::UMinimapSubsystemAmongUs_eventGetMainCharacterEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUMinimapSubsystemAmongUs::execGetMainCharacterEntry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMiniEntry*)Z_Param__Result=P_THIS->GetMainCharacterEntry();
	P_NATIVE_END;
}
// End Class UUMinimapSubsystemAmongUs Function GetMainCharacterEntry

// Begin Class UUMinimapSubsystemAmongUs Function RegisterEntry
struct Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics
{
	struct UMinimapSubsystemAmongUs_eventRegisterEntry_Parms
	{
		AActor* Target;
		bool bIsStatic;
		UTexture2D* Icon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bIsStatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStatic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapSubsystemAmongUs_eventRegisterEntry_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::NewProp_bIsStatic_SetBit(void* Obj)
{
	((UMinimapSubsystemAmongUs_eventRegisterEntry_Parms*)Obj)->bIsStatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::NewProp_bIsStatic = { "bIsStatic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMinimapSubsystemAmongUs_eventRegisterEntry_Parms), &Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::NewProp_bIsStatic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapSubsystemAmongUs_eventRegisterEntry_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::NewProp_bIsStatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMinimapSubsystemAmongUs, nullptr, "RegisterEntry", nullptr, nullptr, Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::UMinimapSubsystemAmongUs_eventRegisterEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::UMinimapSubsystemAmongUs_eventRegisterEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUMinimapSubsystemAmongUs::execRegisterEntry)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_UBOOL(Z_Param_bIsStatic);
	P_GET_OBJECT(UTexture2D,Z_Param_Icon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterEntry(Z_Param_Target,Z_Param_bIsStatic,Z_Param_Icon);
	P_NATIVE_END;
}
// End Class UUMinimapSubsystemAmongUs Function RegisterEntry

// Begin Class UUMinimapSubsystemAmongUs Function RegisterMainCharacterEntry
struct Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics
{
	struct UMinimapSubsystemAmongUs_eventRegisterMainCharacterEntry_Parms
	{
		AActor* Target;
		bool bIsStatic;
		UTexture2D* Icon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bIsStatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStatic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapSubsystemAmongUs_eventRegisterMainCharacterEntry_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::NewProp_bIsStatic_SetBit(void* Obj)
{
	((UMinimapSubsystemAmongUs_eventRegisterMainCharacterEntry_Parms*)Obj)->bIsStatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::NewProp_bIsStatic = { "bIsStatic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMinimapSubsystemAmongUs_eventRegisterMainCharacterEntry_Parms), &Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::NewProp_bIsStatic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapSubsystemAmongUs_eventRegisterMainCharacterEntry_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::NewProp_bIsStatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMinimapSubsystemAmongUs, nullptr, "RegisterMainCharacterEntry", nullptr, nullptr, Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::UMinimapSubsystemAmongUs_eventRegisterMainCharacterEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::UMinimapSubsystemAmongUs_eventRegisterMainCharacterEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUMinimapSubsystemAmongUs::execRegisterMainCharacterEntry)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_UBOOL(Z_Param_bIsStatic);
	P_GET_OBJECT(UTexture2D,Z_Param_Icon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterMainCharacterEntry(Z_Param_Target,Z_Param_bIsStatic,Z_Param_Icon);
	P_NATIVE_END;
}
// End Class UUMinimapSubsystemAmongUs Function RegisterMainCharacterEntry

// Begin Class UUMinimapSubsystemAmongUs Function UnregisterEntry
struct Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics
{
	struct UMinimapSubsystemAmongUs_eventUnregisterEntry_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapSubsystemAmongUs_eventUnregisterEntry_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMinimapSubsystemAmongUs, nullptr, "UnregisterEntry", nullptr, nullptr, Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::UMinimapSubsystemAmongUs_eventUnregisterEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::UMinimapSubsystemAmongUs_eventUnregisterEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUMinimapSubsystemAmongUs::execUnregisterEntry)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterEntry(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UUMinimapSubsystemAmongUs Function UnregisterEntry

// Begin Class UUMinimapSubsystemAmongUs
void UUMinimapSubsystemAmongUs::StaticRegisterNativesUUMinimapSubsystemAmongUs()
{
	UClass* Class = UUMinimapSubsystemAmongUs::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllCurrentEntries", &UUMinimapSubsystemAmongUs::execGetAllCurrentEntries },
		{ "GetMainCharacterEntry", &UUMinimapSubsystemAmongUs::execGetMainCharacterEntry },
		{ "RegisterEntry", &UUMinimapSubsystemAmongUs::execRegisterEntry },
		{ "RegisterMainCharacterEntry", &UUMinimapSubsystemAmongUs::execRegisterMainCharacterEntry },
		{ "UnregisterEntry", &UUMinimapSubsystemAmongUs::execUnregisterEntry },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUMinimapSubsystemAmongUs);
UClass* Z_Construct_UClass_UUMinimapSubsystemAmongUs_NoRegister()
{
	return UUMinimapSubsystemAmongUs::StaticClass();
}
struct Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UMinimapSubsystemAmongUs.h" },
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNewEntryRegister_MetaData[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMainCharacterRegister_MetaData[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEntryRemove_MetaData[] = {
		{ "ModuleRelativePath", "UMinimapSubsystemAmongUs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewEntryRegister;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMainCharacterRegister;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntryRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetAllCurrentEntries, "GetAllCurrentEntries" }, // 568778637
		{ &Z_Construct_UFunction_UUMinimapSubsystemAmongUs_GetMainCharacterEntry, "GetMainCharacterEntry" }, // 1951775236
		{ &Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterEntry, "RegisterEntry" }, // 2964070756
		{ &Z_Construct_UFunction_UUMinimapSubsystemAmongUs_RegisterMainCharacterEntry, "RegisterMainCharacterEntry" }, // 4042503232
		{ &Z_Construct_UFunction_UUMinimapSubsystemAmongUs_UnregisterEntry, "UnregisterEntry" }, // 147787561
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMinimapSubsystemAmongUs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMiniEntry, METADATA_PARAMS(0, nullptr) }; // 1690218711
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMinimapSubsystemAmongUs, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 1690218711
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::NewProp_OnNewEntryRegister = { "OnNewEntryRegister", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMinimapSubsystemAmongUs, OnNewEntryRegister), Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNewEntryRegister_MetaData), NewProp_OnNewEntryRegister_MetaData) }; // 3979773787
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::NewProp_OnMainCharacterRegister = { "OnMainCharacterRegister", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMinimapSubsystemAmongUs, OnMainCharacterRegister), Z_Construct_UDelegateFunction_Bai5_NewMinimapEntry__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMainCharacterRegister_MetaData), NewProp_OnMainCharacterRegister_MetaData) }; // 3979773787
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::NewProp_OnEntryRemove = { "OnEntryRemove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMinimapSubsystemAmongUs, OnEntryRemove), Z_Construct_UDelegateFunction_Bai5_MinimapEntryRemove__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEntryRemove_MetaData), NewProp_OnEntryRemove_MetaData) }; // 496690089
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::NewProp_OnNewEntryRegister,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::NewProp_OnMainCharacterRegister,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::NewProp_OnEntryRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Bai5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::ClassParams = {
	&UUMinimapSubsystemAmongUs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::Class_MetaDataParams), Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUMinimapSubsystemAmongUs()
{
	if (!Z_Registration_Info_UClass_UUMinimapSubsystemAmongUs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUMinimapSubsystemAmongUs.OuterSingleton, Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUMinimapSubsystemAmongUs.OuterSingleton;
}
template<> BAI5_API UClass* StaticClass<UUMinimapSubsystemAmongUs>()
{
	return UUMinimapSubsystemAmongUs::StaticClass();
}
UUMinimapSubsystemAmongUs::UUMinimapSubsystemAmongUs() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUMinimapSubsystemAmongUs);
UUMinimapSubsystemAmongUs::~UUMinimapSubsystemAmongUs() {}
// End Class UUMinimapSubsystemAmongUs

// Begin Registration
struct Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMiniEntry::StaticStruct, Z_Construct_UScriptStruct_FMiniEntry_Statics::NewStructOps, TEXT("MiniEntry"), &Z_Registration_Info_UScriptStruct_MiniEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMiniEntry), 1690218711U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUMinimapSubsystemAmongUs, UUMinimapSubsystemAmongUs::StaticClass, TEXT("UUMinimapSubsystemAmongUs"), &Z_Registration_Info_UClass_UUMinimapSubsystemAmongUs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUMinimapSubsystemAmongUs), 1345671939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_2989109614(TEXT("/Script/Bai5"),
	Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
