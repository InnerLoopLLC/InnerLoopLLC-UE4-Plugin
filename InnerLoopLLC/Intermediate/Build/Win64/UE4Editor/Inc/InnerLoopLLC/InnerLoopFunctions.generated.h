// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class EBoolBranches : uint8;
#ifdef INNERLOOPLLC_InnerLoopFunctions_generated_h
#error "InnerLoopFunctions.generated.h already included, missing '#pragma once' in InnerLoopFunctions.h"
#endif
#define INNERLOOPLLC_InnerLoopFunctions_generated_h

#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrintToLog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInnerLoopFunctionLibrary::PrintToLog(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRHIVendorName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UInnerLoopFunctionLibrary::RHIVendorName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGPUAdapterName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UInnerLoopFunctionLibrary::GetGPUAdapterName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UInnerLoopFunctionLibrary::GetTextFromFile(Z_Param_File); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execSetProjectVersion) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_version); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInnerLoopFunctionLibrary::SetProjectVersion(Z_Param_version); \
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
	DECLARE_FUNCTION(execIfWithEditor) \
	{ \
		P_GET_ENUM_REF(EBoolBranches,Z_Param_Out_Branch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInnerLoopFunctionLibrary::IfWithEditor((EBoolBranches&)(Z_Param_Out_Branch)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWithEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UInnerLoopFunctionLibrary::IsWithEditor(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintToLog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInnerLoopFunctionLibrary::PrintToLog(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRHIVendorName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UInnerLoopFunctionLibrary::RHIVendorName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGPUAdapterName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UInnerLoopFunctionLibrary::GetGPUAdapterName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UInnerLoopFunctionLibrary::GetTextFromFile(Z_Param_File); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execSetProjectVersion) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_version); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInnerLoopFunctionLibrary::SetProjectVersion(Z_Param_version); \
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
	DECLARE_FUNCTION(execIfWithEditor) \
	{ \
		P_GET_ENUM_REF(EBoolBranches,Z_Param_Out_Branch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInnerLoopFunctionLibrary::IfWithEditor((EBoolBranches&)(Z_Param_Out_Branch)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWithEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UInnerLoopFunctionLibrary::IsWithEditor(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInnerLoopFunctionLibrary(); \
	friend struct Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UInnerLoopFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InnerLoopLLC"), NO_API) \
	DECLARE_SERIALIZER(UInnerLoopFunctionLibrary)


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUInnerLoopFunctionLibrary(); \
	friend struct Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UInnerLoopFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InnerLoopLLC"), NO_API) \
	DECLARE_SERIALIZER(UInnerLoopFunctionLibrary)


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_STANDARD_CONSTRUCTORS \
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


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_ENHANCED_CONSTRUCTORS \
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


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_22_PROLOG
#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_RPC_WRAPPERS \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_INCLASS \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InnerLoopFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INNERLOOPLLC_API UClass* StaticClass<class UInnerLoopFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Marketplace_InnerLoopLLC_Source_InnerLoopLLC_Public_InnerLoopFunctions_h


#define FOREACH_ENUM_EBOOLBRANCHES(op) \
	op(EBoolBranches::_True) \
	op(EBoolBranches::_False) 

enum class EBoolBranches : uint8;
template<> INNERLOOPLLC_API UEnum* StaticEnum<EBoolBranches>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
