// Copyright 2019 InnerLoop LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "HeadMountedDisplayTypes.h"
#include "IIdentifiableXRDevice.h" // for FXRDeviceId
#include "InnerLoopFunctions.generated.h"



UCLASS()
class INNERLOOPLLC_API UInnerLoopFunctionLibrary : public UBlueprintFunctionLibrary
{

	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
		static bool AlwaysTrue();

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
		static FString GetProjectVersion();

	UFUNCTION(BlueprintCallable, Category = "InnerLoopLLC|HMD")
		static void SetCenterPosition(float Xpos = 0, float Ypos = 0);

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
		static FVector GetHMDPosition();

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
		static FVector GetBasePosition();

	UFUNCTION(BlueprintCallable, Category = "InnerLoopLLC|HMD")
		static void SetBasePositionZ(float Zpos = 0);

	UFUNCTION(BlueprintPure, Category = "InnerLoopLLC")
		static FString GetTextFromFile(FString File = "");
};