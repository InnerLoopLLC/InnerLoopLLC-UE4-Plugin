// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef INNERLOOPLLC_InnerLoopFunctions_generated_h
#error "InnerLoopFunctions.generated.h already included, missing '#pragma once' in InnerLoopFunctions.h"
#endif
#define INNERLOOPLLC_InnerLoopFunctions_generated_h

#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBasePositionZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Zpos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInnerLoopFunctionLibrary::SetBasePositionZ(Z_Param_Zpos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBasePosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UInnerLoopFunctionLibrary::GetBasePosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UInnerLoopFunctionLibrary::GetHMDPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCenterPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Xpos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Ypos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInnerLoopFunctionLibrary::SetCenterPosition(Z_Param_Xpos,Z_Param_Ypos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UInnerLoopFunctionLibrary::GetProjectVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAlwaysTrue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UInnerLoopFunctionLibrary::AlwaysTrue(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBasePositionZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Zpos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInnerLoopFunctionLibrary::SetBasePositionZ(Z_Param_Zpos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBasePosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UInnerLoopFunctionLibrary::GetBasePosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UInnerLoopFunctionLibrary::GetHMDPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCenterPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Xpos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Ypos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInnerLoopFunctionLibrary::SetCenterPosition(Z_Param_Xpos,Z_Param_Ypos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UInnerLoopFunctionLibrary::GetProjectVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAlwaysTrue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UInnerLoopFunctionLibrary::AlwaysTrue(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInnerLoopFunctionLibrary(); \
	friend struct Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UInnerLoopFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InnerLoopLLC"), NO_API) \
	DECLARE_SERIALIZER(UInnerLoopFunctionLibrary)


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInnerLoopFunctionLibrary(); \
	friend struct Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UInnerLoopFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InnerLoopLLC"), NO_API) \
	DECLARE_SERIALIZER(UInnerLoopFunctionLibrary)


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInnerLoopFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInnerLoopFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInnerLoopFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInnerLoopFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInnerLoopFunctionLibrary(UInnerLoopFunctionLibrary&&); \
	NO_API UInnerLoopFunctionLibrary(const UInnerLoopFunctionLibrary&); \
public:


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInnerLoopFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInnerLoopFunctionLibrary(UInnerLoopFunctionLibrary&&); \
	NO_API UInnerLoopFunctionLibrary(const UInnerLoopFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInnerLoopFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInnerLoopFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInnerLoopFunctionLibrary)


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_14_PROLOG
#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_RPC_WRAPPERS \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_INCLASS \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InnerLoopFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Private_InnerLoopFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
