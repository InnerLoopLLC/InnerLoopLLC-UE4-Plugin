// Copyright 2019 InnerLoop LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "HeadMountedDisplayTypes.h"
#include "IIdentifiableXRDevice.h" // for FXRDeviceId
#include "Engine/LevelStreaming.h"
#include "Engine/LevelStreamingDynamic.h"
#include "InnerLoopFunctions.generated.h"


UENUM(BlueprintType)
enum class EBoolBranch : uint8 
{
	_True,
	_False
};


UCLASS()
class INNERLOOPLLC_API UInnerLoopFunctionLibrary : public UBlueprintFunctionLibrary
{

	GENERATED_UCLASS_BODY()

public:

	// --------------------
	// General functions
	// --------------------
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
		static bool WithEditor();

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC", Meta = (ExpandEnumAsExecs = Branch))
		static void IsWithEditor(EBoolBranch& Branch);

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
		static FString GetProjectVersion();

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC")
		static void SetProjectVersion(FString version);

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
		static FString GetTextFromFile(FString File = "");

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC")
		static void PrintToLog(const FString& InPrefix, const FString& InString);
	
	// --------------------
	// XR functions
	// --------------------
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
		static FVector GetBasePosition();

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
		static void SetBasePosition(FVector Position);

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
		static FRotator GetBaseRotation();

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
		static void SetBaseRotation(FRotator Rotation);

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
		static FTransform GetBaseRotationAndPosition();

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
		static void SetBaseRotationAndPosition(FTransform Transform);

	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
		static void ResetOrientationAndPositionZ(float Yaw, EOrientPositionSelector::Type Options, bool KeepZ);

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
		static UTexture* GetSpectatorScreenTexture();

	// --------------------
	// System Info
	// --------------------	
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
		static FName RHIAdapterName();

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
		static FName RHIVendorName();

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
		static FName RHIShaderFormatName();

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
		static FString CPUBrand();

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
		static FString CPUChipset();

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
		static FString CPUVendor();

	// --------------------
	// Misc
	// --------------------
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Misc", Meta = (keywords = "remove"))
		static void UnloadStreamingLevel(ULevelStreamingDynamic* LevelInstance);

	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Misc")
		static float GetCustomDataValue(UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int32 InstanceIndex, int32 CustomDataIndex);
};