// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bai5/Public/Character/GASController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASController() {}

// Begin Cross Module References
BAI5_API UClass* Z_Construct_UClass_AGASController();
BAI5_API UClass* Z_Construct_UClass_AGASController_NoRegister();
BAI5_API UClass* Z_Construct_UClass_AMyCanvas_NoRegister();
BAI5_API UScriptStruct* Z_Construct_UScriptStruct_FMiniEle();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bai5();
// End Cross Module References

// Begin ScriptStruct FMiniEle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MiniEle;
class UScriptStruct* FMiniEle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MiniEle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MiniEle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniEle, (UObject*)Z_Construct_UPackage__Script_Bai5(), TEXT("MiniEle"));
	}
	return Z_Registration_Info_UScriptStruct_MiniEle.OuterSingleton;
}
template<> BAI5_API UScriptStruct* StaticStruct<FMiniEle>()
{
	return FMiniEle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMiniEle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniEle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniEle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Bai5,
	nullptr,
	&NewStructOps,
	"MiniEle",
	nullptr,
	0,
	sizeof(FMiniEle),
	alignof(FMiniEle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniEle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMiniEle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMiniEle()
{
	if (!Z_Registration_Info_UScriptStruct_MiniEle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MiniEle.InnerSingleton, Z_Construct_UScriptStruct_FMiniEle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MiniEle.InnerSingleton;
}
// End ScriptStruct FMiniEle

// Begin Class AGASController
void AGASController::StaticRegisterNativesAGASController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASController);
UClass* Z_Construct_UClass_AGASController_NoRegister()
{
	return AGASController::StaticClass();
}
struct Z_Construct_UClass_AGASController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/GASController.h" },
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefautMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedSize_MetaData[] = {
		{ "Category", "GASController" },
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyCanvass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTexture_MetaData[] = {
		{ "Category", "GASController" },
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackTexture_MetaData[] = {
		{ "Category", "GASController" },
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefautMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCanvass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASController_Statics::NewProp_DefautMappingContext = { "DefautMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASController, DefautMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefautMappingContext_MetaData), NewProp_DefautMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGASController_Statics::NewProp_FixedSize = { "FixedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASController, FixedSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedSize_MetaData), NewProp_FixedSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASController_Statics::NewProp_MyCanvass = { "MyCanvass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASController, MyCanvass), Z_Construct_UClass_AMyCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyCanvass_MetaData), NewProp_MyCanvass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASController_Statics::NewProp_WhiteTexture = { "WhiteTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASController, WhiteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteTexture_MetaData), NewProp_WhiteTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASController_Statics::NewProp_BlackTexture = { "BlackTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASController, BlackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackTexture_MetaData), NewProp_BlackTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGASController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASController_Statics::NewProp_DefautMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASController_Statics::NewProp_FixedSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASController_Statics::NewProp_MyCanvass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASController_Statics::NewProp_WhiteTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASController_Statics::NewProp_BlackTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGASController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Bai5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASController_Statics::ClassParams = {
	&AGASController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGASController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGASController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGASController()
{
	if (!Z_Registration_Info_UClass_AGASController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASController.OuterSingleton, Z_Construct_UClass_AGASController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGASController.OuterSingleton;
}
template<> BAI5_API UClass* StaticClass<AGASController>()
{
	return AGASController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGASController);
AGASController::~AGASController() {}
// End Class AGASController

// Begin Registration
struct Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_GASController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMiniEle::StaticStruct, Z_Construct_UScriptStruct_FMiniEle_Statics::NewStructOps, TEXT("MiniEle"), &Z_Registration_Info_UScriptStruct_MiniEle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMiniEle), 3563498259U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASController, AGASController::StaticClass, TEXT("AGASController"), &Z_Registration_Info_UClass_AGASController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASController), 2708884352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_GASController_h_3159627927(TEXT("/Script/Bai5"),
	Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_GASController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_GASController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_GASController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_GASController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
