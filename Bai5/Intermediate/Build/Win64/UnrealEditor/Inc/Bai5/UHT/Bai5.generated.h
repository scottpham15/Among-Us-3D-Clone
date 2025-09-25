// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bai5.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BAI5_Bai5_generated_h
#error "Bai5.generated.h already included, missing '#pragma once' in Bai5.h"
#endif
#define BAI5_Bai5_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AmongUsHiu_Bai5_Source_Bai5_Bai5_h


#define FOREACH_ENUM_DEMOABILITYID(op) \
	op(DemoAbilityID::None) \
	op(DemoAbilityID::Confirm) \
	op(DemoAbilityID::Cancel) 

enum class DemoAbilityID : uint8;
template<> struct TIsUEnumClass<DemoAbilityID> { enum { Value = true }; };
template<> BAI5_API UEnum* StaticEnum<DemoAbilityID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
