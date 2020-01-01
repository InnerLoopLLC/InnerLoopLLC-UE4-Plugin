// Copyright 2019 InnerLoop LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "HeadMountedDisplayTypes.h"
#include "IIdentifiableXRDevice.h" // for FXRDeviceId
#include "Components/SplineComponent.h"
#include "InnerLoopFunctions.generated.h"


UENUM(BlueprintType)
enum class EBoolBranches : uint8 
{
	_True,
	_False
};


UCLASS()
class INNERLOOPLLC_API UInnerLoopFunctionLibrary : public UBlueprintFunctionLibrary
{

	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
		static bool IsWithEditor();

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC", Meta = (ExpandEnumAsExecs = Branch))
		static void IfWithEditor(EBoolBranches& Branch);

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
		static FString GetProjectVersion();

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC")
		static void SetProjectVersion(FString version);

	//UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
	//	static void SetCenterPosition(float Xpos = 0, float Ypos = 0);

	//UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
	//	static FVector GetHMDPosition();

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
		static FVector GetBasePosition();

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
		static void SetBasePositionZ(float Zpos = 0);

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
		static FString GetTextFromFile(FString File = "");
	
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
		static FString GetGPUAdapterName();

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
		static FName RHIVendorName();

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC")
		static void PrintToLog(const FString& InString);
};