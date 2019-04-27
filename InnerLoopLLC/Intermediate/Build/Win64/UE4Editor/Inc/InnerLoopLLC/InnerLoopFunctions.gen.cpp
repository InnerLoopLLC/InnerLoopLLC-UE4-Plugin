// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InnerLoopLLC/Private/InnerLoopFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInnerLoopFunctions() {}
// Cross Module References
	INNERLOOPLLC_API UClass* Z_Construct_UClass_UInnerLoopFunctionLibrary_NoRegister();
	INNERLOOPLLC_API UClass* Z_Construct_UClass_UInnerLoopFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_InnerLoopLLC();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition();
// End Cross Module References
	void UInnerLoopFunctionLibrary::StaticRegisterNativesUInnerLoopFunctionLibrary()
	{
		UClass* Class = UInnerLoopFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AlwaysTrue", &UInnerLoopFunctionLibrary::execAlwaysTrue },
			{ "GetBasePosition", &UInnerLoopFunctionLibrary::execGetBasePosition },
			{ "GetHMDPosition", &UInnerLoopFunctionLibrary::execGetHMDPosition },
			{ "GetProjectVersion", &UInnerLoopFunctionLibrary::execGetProjectVersion },
			{ "GetTextFromFile", &UInnerLoopFunctionLibrary::execGetTextFromFile },
			{ "SetBasePositionZ", &UInnerLoopFunctionLibrary::execSetBasePositionZ },
			{ "SetCenterPosition", &UInnerLoopFunctionLibrary::execSetCenterPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics
	{
		struct InnerLoopFunctionLibrary_eventAlwaysTrue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InnerLoopFunctionLibrary_eventAlwaysTrue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InnerLoopFunctionLibrary_eventAlwaysTrue_Parms), &Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC" },
		{ "ModuleRelativePath", "Private/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, "AlwaysTrue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(InnerLoopFunctionLibrary_eventAlwaysTrue_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics
	{
		struct InnerLoopFunctionLibrary_eventGetBasePosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetBasePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC" },
		{ "ModuleRelativePath", "Private/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, "GetBasePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(InnerLoopFunctionLibrary_eventGetBasePosition_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics
	{
		struct InnerLoopFunctionLibrary_eventGetHMDPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetHMDPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC" },
		{ "ModuleRelativePath", "Private/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, "GetHMDPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(InnerLoopFunctionLibrary_eventGetHMDPosition_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics
	{
		struct InnerLoopFunctionLibrary_eventGetProjectVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC" },
		{ "ModuleRelativePath", "Private/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, "GetProjectVersion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(InnerLoopFunctionLibrary_eventGetProjectVersion_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics
	{
		struct InnerLoopFunctionLibrary_eventGetTextFromFile_Parms
		{
			FString File;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetTextFromFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::NewProp_File = { UE4CodeGen_Private::EPropertyClass::Str, "File", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetTextFromFile_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoopLLC" },
		{ "CPP_Default_File", "" },
		{ "ModuleRelativePath", "Private/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, "GetTextFromFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(InnerLoopFunctionLibrary_eventGetTextFromFile_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics
	{
		struct InnerLoopFunctionLibrary_eventSetBasePositionZ_Parms
		{
			float Zpos;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Zpos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::NewProp_Zpos = { UE4CodeGen_Private::EPropertyClass::Float, "Zpos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventSetBasePositionZ_Parms, Zpos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::NewProp_Zpos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoopLLC|HMD" },
		{ "CPP_Default_Zpos", "0.000000" },
		{ "ModuleRelativePath", "Private/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, "SetBasePositionZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(InnerLoopFunctionLibrary_eventSetBasePositionZ_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics
	{
		struct InnerLoopFunctionLibrary_eventSetCenterPosition_Parms
		{
			float Xpos;
			float Ypos;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ypos;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Xpos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::NewProp_Ypos = { UE4CodeGen_Private::EPropertyClass::Float, "Ypos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventSetCenterPosition_Parms, Ypos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::NewProp_Xpos = { UE4CodeGen_Private::EPropertyClass::Float, "Xpos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventSetCenterPosition_Parms, Xpos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::NewProp_Ypos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::NewProp_Xpos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoopLLC|HMD" },
		{ "CPP_Default_Xpos", "0.000000" },
		{ "CPP_Default_Ypos", "0.000000" },
		{ "ModuleRelativePath", "Private/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, "SetCenterPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(InnerLoopFunctionLibrary_eventSetCenterPosition_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInnerLoopFunctionLibrary_NoRegister()
	{
		return UInnerLoopFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InnerLoopLLC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_AlwaysTrue, "AlwaysTrue" }, // 696365729
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition, "GetBasePosition" }, // 1081838156
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition, "GetHMDPosition" }, // 3889265056
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion, "GetProjectVersion" }, // 3520453285
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile, "GetTextFromFile" }, // 1747391036
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ, "SetBasePositionZ" }, // 2363667946
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition, "SetCenterPosition" }, // 2593965041
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InnerLoopFunctions.h" },
		{ "ModuleRelativePath", "Private/InnerLoopFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInnerLoopFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::ClassParams = {
		&UInnerLoopFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInnerLoopFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInnerLoopFunctionLibrary, 2106821463);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInnerLoopFunctionLibrary(Z_Construct_UClass_UInnerLoopFunctionLibrary, &UInnerLoopFunctionLibrary::StaticClass, TEXT("/Script/InnerLoopLLC"), TEXT("UInnerLoopFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInnerLoopFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
