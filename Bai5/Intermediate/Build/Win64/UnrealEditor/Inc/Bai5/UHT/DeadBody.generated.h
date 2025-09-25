// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeadBody.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BAI5_DeadBody_generated_h
#error "DeadBody.generated.h already included, missing '#pragma once' in DeadBody.h"
#endif
#define BAI5_DeadBody_generated_h

#define FID_AmongUsHiu_Bai5_Source_Bai5_DeadBody_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_AmongUsHiu_Bai5_Source_Bai5_DeadBody_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeadBody(); \
	friend struct Z_Construct_UClass_ADeadBody_Statics; \
public: \
	DECLARE_CLASS(ADeadBody, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bai5"), NO_API) \
	DECLARE_SERIALIZER(ADeadBody) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Color=NETFIELD_REP_START, \
		NETFIELD_REP_END=Color	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AmongUsHiu_Bai5_Source_Bai5_DeadBody_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADeadBody(ADeadBody&&); \
	ADeadBody(const ADeadBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeadBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeadBody); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeadBody) \
	NO_API virtual ~ADeadBody();


#define FID_AmongUsHiu_Bai5_Source_Bai5_DeadBody_h_10_PROLOG
#define FID_AmongUsHiu_Bai5_Source_Bai5_DeadBody_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AmongUsHiu_Bai5_Source_Bai5_DeadBody_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AmongUsHiu_Bai5_Source_Bai5_DeadBody_h_13_INCLASS_NO_PURE_DECLS \
	FID_AmongUsHiu_Bai5_Source_Bai5_DeadBody_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BAI5_API UClass* StaticClass<class ADeadBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AmongUsHiu_Bai5_Source_Bai5_DeadBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
