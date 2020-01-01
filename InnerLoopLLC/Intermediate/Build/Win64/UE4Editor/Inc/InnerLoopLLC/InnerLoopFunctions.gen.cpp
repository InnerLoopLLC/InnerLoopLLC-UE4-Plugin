// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InnerLoopLLC/Public/InnerLoopFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInnerLoopFunctions() {}
// Cross Module References
	INNERLOOPLLC_API UEnum* Z_Construct_UEnum_InnerLoopLLC_EBoolBranches();
	UPackage* Z_Construct_UPackage__Script_InnerLoopLLC();
	INNERLOOPLLC_API UClass* Z_Construct_UClass_UInnerLoopFunctionLibrary_NoRegister();
	INNERLOOPLLC_API UClass* Z_Construct_UClass_UInnerLoopFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition();
	INNERLOOPLLC_API UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion();
// End Cross Module References
	static UEnum* EBoolBranches_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InnerLoopLLC_EBoolBranches, Z_Construct_UPackage__Script_InnerLoopLLC(), TEXT("EBoolBranches"));
		}
		return Singleton;
	}
	template<> INNERLOOPLLC_API UEnum* StaticEnum<EBoolBranches>()
	{
		return EBoolBranches_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoolBranches(EBoolBranches_StaticEnum, TEXT("/Script/InnerLoopLLC"), TEXT("EBoolBranches"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InnerLoopLLC_EBoolBranches_Hash() { return 1672468355U; }
	UEnum* Z_Construct_UEnum_InnerLoopLLC_EBoolBranches()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InnerLoopLLC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoolBranches"), 0, Get_Z_Construct_UEnum_InnerLoopLLC_EBoolBranches_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoolBranches::_True", (int64)EBoolBranches::_True },
				{ "EBoolBranches::_False", (int64)EBoolBranches::_False },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "_False.Name", "EBoolBranches::_False" },
				{ "_True.Name", "EBoolBranches::_True" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InnerLoopLLC,
				nullptr,
				"EBoolBranches",
				"EBoolBranches",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UInnerLoopFunctionLibrary::StaticRegisterNativesUInnerLoopFunctionLibrary()
	{
		UClass* Class = UInnerLoopFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBasePosition", &UInnerLoopFunctionLibrary::execGetBasePosition },
			{ "GetGPUAdapterName", &UInnerLoopFunctionLibrary::execGetGPUAdapterName },
			{ "GetHMDPosition", &UInnerLoopFunctionLibrary::execGetHMDPosition },
			{ "GetProjectVersion", &UInnerLoopFunctionLibrary::execGetProjectVersion },
			{ "GetTextFromFile", &UInnerLoopFunctionLibrary::execGetTextFromFile },
			{ "IfWithEditor", &UInnerLoopFunctionLibrary::execIfWithEditor },
			{ "IsWithEditor", &UInnerLoopFunctionLibrary::execIsWithEditor },
			{ "PrintToLog", &UInnerLoopFunctionLibrary::execPrintToLog },
			{ "RHIVendorName", &UInnerLoopFunctionLibrary::execRHIVendorName },
			{ "SetBasePositionZ", &UInnerLoopFunctionLibrary::execSetBasePositionZ },
			{ "SetCenterPosition", &UInnerLoopFunctionLibrary::execSetCenterPosition },
			{ "SetProjectVersion", &UInnerLoopFunctionLibrary::execSetProjectVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetBasePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC|HMD" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "GetBasePosition", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventGetBasePosition_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics
	{
		struct InnerLoopFunctionLibrary_eventGetGPUAdapterName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetGPUAdapterName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC|System Info" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "GetGPUAdapterName", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventGetGPUAdapterName_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName_Statics::FuncParams);
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetHMDPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC|HMD" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "GetHMDPosition", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventGetHMDPosition_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "GetProjectVersion", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventGetProjectVersion_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetTextFromFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventGetTextFromFile_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC" },
		{ "CPP_Default_File", "" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "GetTextFromFile", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventGetTextFromFile_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics
	{
		struct InnerLoopFunctionLibrary_eventIfWithEditor_Parms
		{
			EBoolBranches Branch;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branch_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventIfWithEditor_Parms, Branch), Z_Construct_UEnum_InnerLoopLLC_EBoolBranches, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::NewProp_Branch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::NewProp_Branch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::NewProp_Branch_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC" },
		{ "ExpandEnumAsExecs", "Branch" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "IfWithEditor", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventIfWithEditor_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics
	{
		struct InnerLoopFunctionLibrary_eventIsWithEditor_Parms
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
	void Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InnerLoopFunctionLibrary_eventIsWithEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InnerLoopFunctionLibrary_eventIsWithEditor_Parms), &Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "IsWithEditor", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventIsWithEditor_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics
	{
		struct InnerLoopFunctionLibrary_eventPrintToLog_Parms
		{
			FString InString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventPrintToLog_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::NewProp_InString_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::NewProp_InString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::NewProp_InString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "PrintToLog", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventPrintToLog_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics
	{
		struct InnerLoopFunctionLibrary_eventRHIVendorName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventRHIVendorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC|System Info" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "RHIVendorName", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventRHIVendorName_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::NewProp_Zpos = { "Zpos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventSetBasePositionZ_Parms, Zpos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::NewProp_Zpos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC|HMD" },
		{ "CPP_Default_Zpos", "0.000000" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "SetBasePositionZ", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventSetBasePositionZ_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::NewProp_Ypos = { "Ypos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventSetCenterPosition_Parms, Ypos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::NewProp_Xpos = { "Xpos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventSetCenterPosition_Parms, Xpos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::NewProp_Ypos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::NewProp_Xpos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC|HMD" },
		{ "CPP_Default_Xpos", "0.000000" },
		{ "CPP_Default_Ypos", "0.000000" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "SetCenterPosition", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventSetCenterPosition_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics
	{
		struct InnerLoopFunctionLibrary_eventSetProjectVersion_Parms
		{
			FString version;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InnerLoopFunctionLibrary_eventSetProjectVersion_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics::NewProp_version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "InnerLoop LLC" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInnerLoopFunctionLibrary, nullptr, "SetProjectVersion", nullptr, nullptr, sizeof(InnerLoopFunctionLibrary_eventSetProjectVersion_Parms), Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetBasePosition, "GetBasePosition" }, // 582519158
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetGPUAdapterName, "GetGPUAdapterName" }, // 3812837057
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetHMDPosition, "GetHMDPosition" }, // 98803508
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetProjectVersion, "GetProjectVersion" }, // 2548867967
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_GetTextFromFile, "GetTextFromFile" }, // 2322718866
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_IfWithEditor, "IfWithEditor" }, // 1778917800
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_IsWithEditor, "IsWithEditor" }, // 267577838
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_PrintToLog, "PrintToLog" }, // 1867093070
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_RHIVendorName, "RHIVendorName" }, // 1109665313
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetBasePositionZ, "SetBasePositionZ" }, // 1394052091
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetCenterPosition, "SetCenterPosition" }, // 970005584
		{ &Z_Construct_UFunction_UInnerLoopFunctionLibrary_SetProjectVersion, "SetProjectVersion" }, // 3763878920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InnerLoopFunctions.h" },
		{ "ModuleRelativePath", "Public/InnerLoopFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInnerLoopFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInnerLoopFunctionLibrary_Statics::ClassParams = {
		&UInnerLoopFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
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
	IMPLEMENT_CLASS(UInnerLoopFunctionLibrary, 1258803352);
	template<> INNERLOOPLLC_API UClass* StaticClass<UInnerLoopFunctionLibrary>()
	{
		return UInnerLoopFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInnerLoopFunctionLibrary(Z_Construct_UClass_UInnerLoopFunctionLibrary, &UInnerLoopFunctionLibrary::StaticClass, TEXT("/Script/InnerLoopLLC"), TEXT("UInnerLoopFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInnerLoopFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
