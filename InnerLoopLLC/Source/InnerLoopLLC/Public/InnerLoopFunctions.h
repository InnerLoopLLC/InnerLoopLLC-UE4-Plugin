// Copyright 2020 InnerLoop LLC. All Rights Reserved.

#pragma once

#include "InnerLoopLLC.h"

// Essentials
#include "UObject/ObjectMacros.h"
#include "CoreGlobals.h"
#include "CoreMinimal.h"
#include "EngineGlobals.h"
#include "Engine/Engine.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

// General 
#include "Features/IModularFeatures.h"
#include "GameFramework/WorldSettings.h"
#include "Misc/FileHelper.h"

// System Info
#include "Runtime/RHI/Public/RHI.h"
#include "Runtime/RHI/Public/RHIDefinitions.h"

// Misc
#include "Engine/LevelStreaming.h"
#include "Engine/LevelStreamingDynamic.h"
#include "Components/PrimitiveComponent.h"
#include "Components/InstancedStaticMeshComponent.h"

// XR
#include "HeadMountedDisplayTypes.h"
//#include "HeadMountedDisplayFunctionLibrary.h"
#include "IHeadMountedDisplay.h"
#include "IIdentifiableXRDevice.h"
#include "IXRTrackingSystem.h"
#include "IXRSystemAssets.h"
//#include "XRMotionControllerBase.h"
//#include "XRTrackingSystemBase.h"
#include "ISpectatorScreenController.h"

// Android Platform
#if PLATFORM_ANDROID
#include "Android/AndroidPlatformMisc.h"
#endif

#include "InnerLoopFunctions.generated.h"

// Used only for True and False exec pins. Not intended to be used for anything else.
UENUM(BlueprintType)
enum class EBoolBranch : uint8 
{
	_True,
	_False
};

UENUM(BlueprintType)
enum class ELogVerbosityBP : uint8
{
	Log,
	Warning,
	Error
};

UENUM(BlueprintType)
enum class EOnlineSubsystem : uint8 
{
	Oculus,
	Pico,
	Steam,
	None
};

UCLASS()
class INNERLOOPLLC_API UInnerLoopFunctionLibrary : public UBlueprintFunctionLibrary
{

	GENERATED_UCLASS_BODY()

public:

	// --------------------
	// General functions
	// --------------------

	// Returns Bool if project is running with UE4 editor or not.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
	static bool IsWithEditor();

	// Fires exec pins if project is running with UE4 editor or not. Useful for skipping cinematics/etc while developing.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC", Meta = (ExpandEnumAsExecs = Branch))
	static void WithEditor(EBoolBranch& Branch);

	// Returns Project Version as set in Project Description.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
	static FString GetProjectVersion();

	// Sets the Project Version. Useful for marking daily builds, etc. Recommended to only use if WithEditor.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC")
	static void SetProjectVersion(FString version);

	// Returns bStartInVR as set in xxGame.ini.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
	static bool GetStartInVR();
	
	// Sets bStartInVR.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC")
	static void SetStartInVR(bool bStartInVR);

	// Returns string value as set in .ini file. Path is relative to project directory.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
	static FString GetIniStringValue(FString Path, FString Section, FString Key);
	
	// Sets value in .ini file. Path is relative to project directory.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC")
	static void SetIniStringValue(FString Path, FString Section, FString Key, FString Value);

	// Returns all sections from an .ini file. Path is relative to the project directory.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
	static bool GetIniSections(FString Path, TArray<FString> &Sections);

	// Returns all keys from a section of an .ini file. Path is relative to the project directory.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC")
	static bool GetIniKeys(FString Section, TArray<FString> &Keys, FString &Filename);
	
	// --------------------
	// Android functions
	// --------------------

	// Returns Android Store Version as set in Android Settings.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Android")
	static int32 GetAndroidStoreVersion();

	// Sets the Android Store Version.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Android")
	static void SetAndroidStoreVersion(int32 Version);

	// Returns Android Minimum SDK Version as set in Android Settings.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Android")
	static int32 GetAndroidMinSDKVersion();

	// Sets the Android Minimum SDK Version.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Android")
	static void SetAndroidMinSDKVersion(int32 Version);

	// Returns Android Minimum SDK Version as set in Android Settings.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Android")
	static int32 GetAndroidTargetSDKVersion();

	// Sets the Android Minimum SDK Version.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Android")
	static void SetAndroidTargetSDKVersion(int32 Version);

	// Returns Android Minimum SDK Version as set in Android Settings.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Android")
	static FString GetAndroidSDKAPILevelOverride();

	// Sets the Android Minimum SDK Version.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Android")
	static void SetAndroidSDKAPILevelOverride(FString SdkApiLevel);

	// Returns Android Minimum SDK Version as set in Android Settings.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Android")
	static FString GetAndroidNDKAPILevelOverride();

	// Sets the Android Minimum SDK Version.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Android")
	static void SetAndroidNDKAPILevelOverride(FString NdkApiLevel);

	// Returns Android Version Display Name as set in Android Settings.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Android")
	static FString GetAndroidVersionDisplayName();
	
	// Sets the Android Version Display Name.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Android")
	static void SetAndroidVersionDisplayName(FString version);
	
	// --------------------
	// OnlineSubsystem functions
	// --------------------
	
	// Returns Default Platform Service as set in xxEngine.ini.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Online")
	static EOnlineSubsystem GetDefaultPlatformService();

	// Sets the Default Platform Service.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Online")
	static void SetDefaultPlatformService(EOnlineSubsystem PlatformService);

	// Enables the selected online subsystem.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Online")
	static void EnableOnlineSubsystem(EOnlineSubsystem OnlineSubsystem, bool bEnabled);

	// Returns the enabled state of the selected online subsystem.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Online")
	static bool IsOnlineSubsystemEnabled(EOnlineSubsystem OnlineSubsystem);

	// Returns Steam App ID as set in xxEngine.ini.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Online")
	static FString GetSteamAppID();
	
	// Sets the Steam App ID.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Online")
	static void SetSteamAppID(FString AppID);

	// --------------------
	// XR functions
	// --------------------

	// Returns HMD Device Priority as set in xxEngine.ini.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
	static void GetHMDDevicePriority(int32& OculusHMD, int32& SteamVR, int32& OpenXRHMD, int32& WindowsMixedRealityHMD, int32& PICOXRHMD);

	// Sets the HMD Device Priority.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
	static void SetHMDDevicePriority(int32 OculusHMD = 4, int32 SteamVR = 3, int32 OpenXRHMD = 20, int32 WindowsMixedRealityHMD = 10, int32 PICOXRHMD = 5);

	// Returns center of playspace as Vector.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
	static FVector GetBasePosition();

	// Sets new center of playspace.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
	static void SetBasePosition(FVector Position);

	// Returns rotation of playspace as Rotator.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
	static FRotator GetBaseRotation();

	// Sets new rotation of playspace.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
	static void SetBaseRotation(FRotator Rotation);

	// Returns rotation and center of playspace as Transform. Scale is ignored.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
	static FTransform GetBaseRotationAndPosition();

	// Sets new rotation and center of playspace. Scale is ignored.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
	static void SetBaseRotationAndPosition(FTransform Transform);

	// Reorients playspace without adjusting Z. Useful for maintaining floor height.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|XR")
	static void ResetOrientationAndPositionZ(float Yaw, EOrientPositionSelector::Type Options, bool bKeepZ);

	// Gets the currently set spectator screen texture.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
	static UTexture* GetSpectatorScreenTexture();

	// Get the in-use HMD system name
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|XR")
	static FName GetHMDSystemName();

	// --------------------
	// System Info
	// --------------------	

	// Returns name of installed GPU. Useful for automatically configuring settings based on GPU.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
	static FName RHIAdapterName();

	// Returns vendor name of installed GPU.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
	static FName RHIVendorName();

	// Returns name of the current shader format. (e.g. "PCD3D_ES3_1", etc)
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
	static FName RHIShaderFormatName();

	// Returns as string the brand of installed CPU.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
	static FString CPUBrand();

	// Returns as string the chipset of installed CPU.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
	static FString CPUChipset();

	// Returns as string the vendor of installed CPU.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|System Info")
	static FString CPUVendor();

	// --------------------
	// Misc
	// --------------------

	// Reads a.txt file and returns contents as a string. Useful for things like including update notes in game.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Misc")
	static FString GetTextFromFile(FString File = "");

	/* Gets Logging Verbosity */
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Misc")
	static ELogVerbosityBP GetLogVerbosity();

	/* Sets Logging Verbosity */
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Misc")
	static void SetLogVerbosity(ELogVerbosityBP Verbosity);

	/* Prints string to log file. Logs must be enabled for this to work in shipping builds. See this forum post in order to do that: 
	https://forums.unrealengine.com/development-discussion/c-gameplay-programming/1614392-how-to-add-buselogginginshipping-to-my-project#post1614965 */
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Misc")
	static void PrintToLog(ELogVerbosityBP Verbosity, FString Prefix, FString String, bool bPrintToScreen = false, float Duration = 2.f);

	// Returns the date from Unix time (seconds from midnight 1970-01-01)
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Misc")
	static FDateTime FromUnixTimestamp(int64 UnixTimestamp);

	// Returns this date as the number of seconds since the Unix Epoch (January 1st of 1970).
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Misc")
	static int64 ToUnixTimestamp(FDateTime DateTime);
	
	// Unloads and removes streaming level.
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Misc", Meta = (keywords = "remove"))
	static void UnloadStreamingLevel(ULevelStreamingDynamic* LevelInstance);

	// Gets the value of Custom Data from Instanced Static Mesh Component.
	UFUNCTION(BlueprintPure, Category = "InnerLoop LLC|Misc")
	static float GetCustomDataValue(UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int32 InstanceIndex, int32 CustomDataIndex);

	// Arbitrary Undefined Behavior
	UFUNCTION(BlueprintCallable, Category = "InnerLoop LLC|Misc")
	static void ArbitraryUndefinedBehavior();
};