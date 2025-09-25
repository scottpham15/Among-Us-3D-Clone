// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMinimapSubsystemAmongUs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTexture2D;
struct FMiniEntry;
#ifdef BAI5_UMinimapSubsystemAmongUs_generated_h
#error "UMinimapSubsystemAmongUs.generated.h already included, missing '#pragma once' in UMinimapSubsystemAmongUs.h"
#endif
#define BAI5_UMinimapSubsystemAmongUs_generated_h

#define FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMiniEntry_Statics; \
	BAI5_API static class UScriptStruct* StaticStruct();


template<> BAI5_API UScriptStruct* StaticStruct<struct FMiniEntry>();

#define FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_27_DELEGATE \
BAI5_API void FNewMinimapEntry_DelegateWrapper(const FMulticastScriptDelegate& NewMinimapEntry, FMiniEntry Entry);


#define FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_28_DELEGATE \
BAI5_API void FMinimapEntryRemove_DelegateWrapper(const FMulticastScriptDelegate& MinimapEntryRemove, AActor* Entry);


#define FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterEntry); \
	DECLARE_FUNCTION(execGetMainCharacterEntry); \
	DECLARE_FUNCTION(execGetAllCurrentEntries); \
	DECLARE_FUNCTION(execRegisterEntry); \
	DECLARE_FUNCTION(execRegisterMainCharacterEntry);


#define FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMinimapSubsystemAmongUs(); \
	friend struct Z_Construct_UClass_UUMinimapSubsystemAmongUs_Statics; \
public: \
	DECLARE_CLASS(UUMinimapSubsystemAmongUs, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bai5"), NO_API) \
	DECLARE_SERIALIZER(UUMinimapSubsystemAmongUs)


#define FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMinimapSubsystemAmongUs(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUMinimapSubsystemAmongUs(UUMinimapSubsystemAmongUs&&); \
	UUMinimapSubsystemAmongUs(const UUMinimapSubsystemAmongUs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMinimapSubsystemAmongUs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMinimapSubsystemAmongUs); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMinimapSubsystemAmongUs) \
	NO_API virtual ~UUMinimapSubsystemAmongUs();


#define FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_29_PROLOG
#define FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_33_INCLASS_NO_PURE_DECLS \
	FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BAI5_API UClass* StaticClass<class UUMinimapSubsystemAmongUs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AmongUsHiu_Bai5_Source_Bai5_UMinimapSubsystemAmongUs_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
