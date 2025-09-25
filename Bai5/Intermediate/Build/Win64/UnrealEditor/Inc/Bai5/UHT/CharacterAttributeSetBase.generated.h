// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Abilities/AttributeSets/CharacterAttributeSetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef BAI5_CharacterAttributeSetBase_generated_h
#error "CharacterAttributeSetBase.generated.h already included, missing '#pragma once' in CharacterAttributeSetBase.h"
#endif
#define BAI5_CharacterAttributeSetBase_generated_h

#define FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_Level);


#define FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAttributeSetBase(); \
	friend struct Z_Construct_UClass_UCharacterAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(UCharacterAttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bai5"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAttributeSetBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Level=NETFIELD_REP_START, \
		Health, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		NETFIELD_REP_END=MaxMana	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UCharacterAttributeSetBase) \
public:


#define FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAttributeSetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterAttributeSetBase(UCharacterAttributeSetBase&&); \
	UCharacterAttributeSetBase(const UCharacterAttributeSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAttributeSetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAttributeSetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAttributeSetBase) \
	NO_API virtual ~UCharacterAttributeSetBase();


#define FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_20_PROLOG
#define FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BAI5_API UClass* StaticClass<class UCharacterAttributeSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AmongUsHiu_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
