// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bai5/Bai5.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBai5() {}

// Begin Cross Module References
BAI5_API UEnum* Z_Construct_UEnum_Bai5_DemoAbilityID();
UPackage* Z_Construct_UPackage__Script_Bai5();
// End Cross Module References

// Begin Enum DemoAbilityID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_DemoAbilityID;
static UEnum* DemoAbilityID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_DemoAbilityID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_DemoAbilityID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Bai5_DemoAbilityID, (UObject*)Z_Construct_UPackage__Script_Bai5(), TEXT("DemoAbilityID"));
	}
	return Z_Registration_Info_UEnum_DemoAbilityID.OuterSingleton;
}
template<> BAI5_API UEnum* StaticEnum<DemoAbilityID>()
{
	return DemoAbilityID_StaticEnum();
}
struct Z_Construct_UEnum_Bai5_DemoAbilityID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "DemoAbilityID::Cancel" },
		{ "Confirm.DisplayName", "Confirm" },
		{ "Confirm.Name", "DemoAbilityID::Confirm" },
		{ "ModuleRelativePath", "Bai5.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "DemoAbilityID::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DemoAbilityID::None", (int64)DemoAbilityID::None },
		{ "DemoAbilityID::Confirm", (int64)DemoAbilityID::Confirm },
		{ "DemoAbilityID::Cancel", (int64)DemoAbilityID::Cancel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Bai5_DemoAbilityID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Bai5,
	nullptr,
	"DemoAbilityID",
	"DemoAbilityID",
	Z_Construct_UEnum_Bai5_DemoAbilityID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Bai5_DemoAbilityID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Bai5_DemoAbilityID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Bai5_DemoAbilityID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Bai5_DemoAbilityID()
{
	if (!Z_Registration_Info_UEnum_DemoAbilityID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DemoAbilityID.InnerSingleton, Z_Construct_UEnum_Bai5_DemoAbilityID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_DemoAbilityID.InnerSingleton;
}
// End Enum DemoAbilityID

// Begin Registration
struct Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Bai5_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ DemoAbilityID_StaticEnum, TEXT("DemoAbilityID"), &Z_Registration_Info_UEnum_DemoAbilityID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4021609105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Bai5_h_464717989(TEXT("/Script/Bai5"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Bai5_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AmongUsHiu_Bai5_Source_Bai5_Bai5_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
