// Copyright 2020 InnerLoop LLC. All Rights Reserved.

#include "InnerLoopFunctions.h"

UInnerLoopFunctionLibrary::UInnerLoopFunctionLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

// --------------------
// General functions
// --------------------

bool UInnerLoopFunctionLibrary::IsWithEditor()
{
#if WITH_EDITOR

	return true;

#else

	return false;
	
#endif //WITH_EDITOR
}

void UInnerLoopFunctionLibrary::WithEditor(EBoolBranch& Branch)
{
#if WITH_EDITOR

	Branch = EBoolBranch::_True;

#else

	Branch = EBoolBranch::_False;

#endif //WITH_EDITOR
}

FString UInnerLoopFunctionLibrary::GetProjectVersion()
{
	FString ProjectVersion;
	GConfig->GetString(TEXT("/Script/EngineSettings.GeneralProjectSettings"), TEXT("ProjectVersion"), ProjectVersion, FPaths::ProjectDir() + "Config/DefaultGame.ini");
	return ProjectVersion;
}

void UInnerLoopFunctionLibrary::SetProjectVersion(FString Version)
{
#if WITH_EDITOR
	GConfig->SetString(TEXT("/Script/EngineSettings.GeneralProjectSettings"), TEXT("ProjectVersion"), *Version, FPaths::ProjectDir() + "Config/DefaultGame.ini");
	GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultGame.ini");
#else
	UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), "Unable to SetProjectVersion without the UE4 Editor.");
#endif
}

bool UInnerLoopFunctionLibrary::GetStartInVR()
{
	bool bStartInVR;
	GConfig->GetBool(TEXT("/Script/EngineSettings.GeneralProjectSettings"), TEXT("bStartInVR"), bStartInVR, FPaths::ProjectDir() + "Config/DefaultGame.ini");
	return bStartInVR;
}

void UInnerLoopFunctionLibrary::SetStartInVR(const bool bStartInVR)
{
#if WITH_EDITOR
	GConfig->SetBool(TEXT("/Script/EngineSettings.GeneralProjectSettings"), TEXT("bStartInVR"), bStartInVR, FPaths::ProjectDir() + "Config/DefaultGame.ini");
	GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultGame.ini");
#else
	UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), "Unable to SetStartInVR without the UE4 Editor.");
#endif
}

FString UInnerLoopFunctionLibrary::GetIniStringValue(FString Path, FString Section, FString Key)
{
	FString ReturnValue;
	GConfig->GetString(*Section, *Key, ReturnValue, FPaths::ProjectDir() + *Path);
	return ReturnValue;
}

void UInnerLoopFunctionLibrary::SetIniStringValue(const FString Path, const FString Section, const FString Key, const FString Value)
{
#if WITH_EDITOR
	GConfig->SetString(*Section, *Key, *Value, FPaths::ProjectDir() + *Path);
	GConfig->Flush(false, FPaths::ProjectDir() + *Path);
#else
	UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), "Unable to set ini values at runtime. This is only possible in the editor.");
#endif
}

bool UInnerLoopFunctionLibrary::GetIniSections(FString Path, TArray<FString> &Sections)
{
	return GConfig->GetSectionNames(FPaths::ProjectDir() + *Path, Sections);
}

bool UInnerLoopFunctionLibrary::GetIniKeys(FString Section, TArray<FString> &Keys, FString &Filename)
{
	return GConfig->GetSection(*Section, Keys, Filename);
}

int32 UInnerLoopFunctionLibrary::GetAndroidStoreVersion()
{
	FString AndroidStoreVersion;
	GConfig->GetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("StoreVersion"), AndroidStoreVersion, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	return FCString::Atoi(*AndroidStoreVersion);
}

void UInnerLoopFunctionLibrary::SetAndroidStoreVersion(const int32 Version)
{
#if WITH_EDITOR
	GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("StoreVersion"), *FString::FromInt(Version), FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
#else
	UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), "Unable to SetProjectVersion without the UE4 Editor.");
#endif
}

//-----------------------
int32 UInnerLoopFunctionLibrary::GetAndroidMinSDKVersion()
{
	FString AndroidMinSDKVersion;
	GConfig->GetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("MinSDKVersion"), AndroidMinSDKVersion, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	return FCString::Atoi(*AndroidMinSDKVersion);
}

void UInnerLoopFunctionLibrary::SetAndroidMinSDKVersion(const int32 Version)
{
#if WITH_EDITOR
	GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("MinSDKVersion"), *FString::FromInt(Version), FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
#else
	UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), "Unable to SetProjectVersion without the UE4 Editor.");
#endif
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
int32 UInnerLoopFunctionLibrary::GetAndroidTargetSDKVersion()
{
	FString AndroidTargetSDKVersion;
	GConfig->GetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("TargetSDKVersion"), AndroidTargetSDKVersion, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	return FCString::Atoi(*AndroidTargetSDKVersion);
}

void UInnerLoopFunctionLibrary::SetAndroidTargetSDKVersion(const int32 Version)
{
#if WITH_EDITOR
	GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("TargetSDKVersion"), *FString::FromInt(Version), FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
#else
	UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), "Unable to SetProjectVersion without the UE4 Editor.");
#endif
}

//*****************
FString UInnerLoopFunctionLibrary::GetAndroidSDKAPILevelOverride()
{
	FString SdkApiLevel;
	GConfig->GetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("SDKAPILevelOverride"), SdkApiLevel, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	return SdkApiLevel;
}

void UInnerLoopFunctionLibrary::SetAndroidSDKAPILevelOverride(const FString SdkApiLevel)
{
#if WITH_EDITOR
	GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("SDKAPILevelOverride"), *SdkApiLevel, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
#else
	UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), "Unable to SetProjectVersion without the UE4 Editor.");
#endif
}

//-----------------------
FString UInnerLoopFunctionLibrary::GetAndroidNDKAPILevelOverride()
{
	FString NdkApiLevel;
	GConfig->GetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("NDKAPILevelOverride"), NdkApiLevel, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	return NdkApiLevel;
}

void UInnerLoopFunctionLibrary::SetAndroidNDKAPILevelOverride(const FString NdkApiLevel)
{
#if WITH_EDITOR
	GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("NDKAPILevelOverride"), *NdkApiLevel, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
#else
	UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), "Unable to SetProjectVersion without the UE4 Editor.");
#endif
}
//-----------------------
EOnlineSubsystem UInnerLoopFunctionLibrary::GetDefaultPlatformService()
{
	FString DefaultPlatformService;
	GConfig->GetString(TEXT("OnlineSubsystem"), TEXT("DefaultPlatformService"), DefaultPlatformService, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	if (DefaultPlatformService == "Oculus")
	{
		return EOnlineSubsystem::Oculus;
	}
	if (DefaultPlatformService == "Steam")
	{
		return EOnlineSubsystem::Steam;
	}
	if (DefaultPlatformService == "PICO")
	{
		return EOnlineSubsystem::Steam;
	}
	return EOnlineSubsystem::None;
}

void UInnerLoopFunctionLibrary::SetDefaultPlatformService(const EOnlineSubsystem PlatformService)
{
#if WITH_EDITOR
	FString PlatformServiceString = "";
	switch (PlatformService)
	{
		case EOnlineSubsystem::Oculus:
			PlatformServiceString = "Oculus";
			break;
		case EOnlineSubsystem::Steam:
			PlatformServiceString = "Steam";
			break;
		case EOnlineSubsystem::Pico:
			PlatformServiceString = "PICO";
			break;
		default:
			PlatformServiceString = "None";
			break;
	}
	GConfig->SetString(TEXT("OnlineSubsystem"), TEXT("DefaultPlatformService"), *PlatformServiceString, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
#endif
}

void UInnerLoopFunctionLibrary::EnableOnlineSubsystem(const EOnlineSubsystem OnlineSubsystem, const bool bEnabled)
{
#if WITH_EDITOR
	switch (OnlineSubsystem)
	{
	case EOnlineSubsystem::Oculus:
		GConfig->SetBool(TEXT("OnlineSubsystemOculus"), TEXT("bEnabled"), bEnabled, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
		GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
		break;
	case EOnlineSubsystem::Steam:
		GConfig->SetBool(TEXT("OnlineSubsystemSteam"), TEXT("bEnabled"), bEnabled, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
		GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
		break;
	case EOnlineSubsystem::Pico:
		GConfig->SetBool(TEXT("OnlineSubsystemPico"), TEXT("bEnabled"), bEnabled, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
		GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
		break;
	default:
		break;
	}
#endif
}

bool UInnerLoopFunctionLibrary::IsOnlineSubsystemEnabled(const EOnlineSubsystem OnlineSubsystem)
{
	bool IsOnlineSubsystemEnabled = false;
	switch (OnlineSubsystem)
	{
	case EOnlineSubsystem::Oculus:
		GConfig->GetBool(TEXT("OnlineSubsystemOculus"), TEXT("bEnabled"), IsOnlineSubsystemEnabled, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
		return IsOnlineSubsystemEnabled;
	case EOnlineSubsystem::Steam:
		GConfig->GetBool(TEXT("OnlineSubsystemSteam"), TEXT("bEnabled"), IsOnlineSubsystemEnabled, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
		return IsOnlineSubsystemEnabled;
	case EOnlineSubsystem::Pico:
		GConfig->GetBool(TEXT("OnlineSubsystemPico"), TEXT("bEnabled"), IsOnlineSubsystemEnabled, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
		return IsOnlineSubsystemEnabled;
	default:
		return IsOnlineSubsystemEnabled;	
	}
}

FString UInnerLoopFunctionLibrary::GetSteamAppID()
{
	FString SteamAppID = "";
	GConfig->GetString(TEXT("OnlineSubsystemSteam"),TEXT("SteamAppId"), SteamAppID,FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	return SteamAppID;
}

void UInnerLoopFunctionLibrary::SetSteamAppID(FString AppID)
{
	GConfig->SetString(TEXT("OnlineSubsystemSteam"),TEXT("SteamAppId"), *AppID,FPaths::ProjectDir() + "Config/DefaultEngine.ini");
}

//-----------------------

void UInnerLoopFunctionLibrary::GetHMDDevicePriority(int32& OculusHMD, int32& SteamVR, int32& OpenXRHMD, int32& WindowsMixedRealityHMD, int32& PICOXRHMD)
{
	GConfig->GetInt(TEXT("HMDPluginPriority"), TEXT("OculusHMD"), OculusHMD, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->GetInt(TEXT("HMDPluginPriority"), TEXT("SteamVR"), SteamVR, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->GetInt(TEXT("HMDPluginPriority"), TEXT("OpenXRHMD"), OpenXRHMD, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->GetInt(TEXT("HMDPluginPriority"), TEXT("WindowsMixedRealityHMD"), WindowsMixedRealityHMD, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->GetInt(TEXT("HMDPluginPriority"), TEXT("PICOXRHMD"), PICOXRHMD, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
}

void UInnerLoopFunctionLibrary::SetHMDDevicePriority(const int32 OculusHMD, const int32 SteamVR, const int32 OpenXRHMD, const int32 WindowsMixedRealityHMD, const int32 PICOXRHMD)
{
	GConfig->SetInt(TEXT("HMDPluginPriority"), TEXT("OculusHMD"), OculusHMD, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->SetInt(TEXT("HMDPluginPriority"), TEXT("SteamVR"), SteamVR, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->SetInt(TEXT("HMDPluginPriority"), TEXT("OpenXRHMD"), OpenXRHMD, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->SetInt(TEXT("HMDPluginPriority"), TEXT("WindowsMixedRealityHMD"), WindowsMixedRealityHMD, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->SetInt(TEXT("HMDPluginPriority"), TEXT("PICOXRHMD"), PICOXRHMD, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
}

//-----------------------

FString UInnerLoopFunctionLibrary::GetAndroidVersionDisplayName()
{
	FString AndroidVersionDisplayName;
	GConfig->GetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("VersionDisplayName"), AndroidVersionDisplayName, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	return AndroidVersionDisplayName;
}

void UInnerLoopFunctionLibrary::SetAndroidVersionDisplayName(FString Version)
{
#if WITH_EDITOR
	GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("VersionDisplayName"), *Version, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
	GConfig->Flush(false, FPaths::ProjectDir() + "Config/DefaultEngine.ini");
#else
	UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), "Unable to SetAndroidVersionDisplayName without the UE4 Editor.");
#endif
}

FString UInnerLoopFunctionLibrary::GetTextFromFile(FString File)
{
	FString FileData = "";

	FFileHelper::LoadFileToString(FileData, *File);

	return FileData;
}

ELogVerbosityBP UInnerLoopFunctionLibrary::GetLogVerbosity()
{
	const ELogVerbosity::Type LogVerbosity = UE_GET_LOG_VERBOSITY(LogInnerLoopLLC);
	switch (LogVerbosity)
	{
	case ELogVerbosity::Log:
		return ELogVerbosityBP::Log;
	case ELogVerbosity::Warning:
		return ELogVerbosityBP::Warning;
	case ELogVerbosity::Error:
		return ELogVerbosityBP::Error;
	// Other log types will return Log, but they shouldn't be possible since everything we're setting is covered above
	default:
		return ELogVerbosityBP::Log;
	}
}

void UInnerLoopFunctionLibrary::SetLogVerbosity(const ELogVerbosityBP Verbosity)
{
	switch (Verbosity)
	{
	case ELogVerbosityBP::Log:
		UE_SET_LOG_VERBOSITY(LogInnerLoopLLC, Log);
		break;
	case ELogVerbosityBP::Warning:
		UE_SET_LOG_VERBOSITY(LogInnerLoopLLC, Warning);
		break;
	case ELogVerbosityBP::Error:
		UE_SET_LOG_VERBOSITY(LogInnerLoopLLC, Error);
		break;
	default:
		UE_SET_LOG_VERBOSITY(LogInnerLoopLLC, Log);
		break;
	}
}

void UInnerLoopFunctionLibrary::PrintToLog(const ELogVerbosityBP Verbosity, const FString Prefix, const FString String, const bool bPrintToScreen, float Duration)
{
	const FString FinalString = Prefix + String;
	switch (Verbosity)
	{
	case ELogVerbosityBP::Log:
		UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), *FinalString);
		break;
	case ELogVerbosityBP::Warning:
		UE_LOG(LogInnerLoopLLC, Warning, TEXT("%s"), *FinalString);
		break;
	case ELogVerbosityBP::Error:
		UE_LOG(LogInnerLoopLLC, Error, TEXT("%s"), *FinalString);
		break;
	default:
		UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), *FinalString);
		break;
	}

	if (bPrintToScreen)
	{
		if (GAreScreenMessagesEnabled)
		{
			if (GConfig && Duration < 0)
			{
				GConfig->GetFloat(TEXT("Kismet"), TEXT("PrintStringDuration"), Duration, GEngineIni);
			}
			GEngine->AddOnScreenDebugMessage((uint64)-1, Duration, FLinearColor(0.0, 0.66, 1.0).ToFColor(true), FinalString);
		}
		else
		{
			UE_LOG(LogBlueprint, VeryVerbose, TEXT("Screen messages disabled (!GAreScreenMessagesEnabled).  Cannot print to screen."));
		}
	}
}

FDateTime UInnerLoopFunctionLibrary::FromUnixTimestamp(const int64 UnixTimestamp)
{
	return FDateTime::FromUnixTimestamp(UnixTimestamp);
}

int64 UInnerLoopFunctionLibrary::ToUnixTimestamp(const FDateTime DateTime)
{
	return DateTime.FDateTime::ToUnixTimestamp();
}

// --------------------
// XR functions
// --------------------

FVector UInnerLoopFunctionLibrary::GetBasePosition()
{
	return GEngine->XRSystem->GetBasePosition();
}

void UInnerLoopFunctionLibrary::SetBasePosition(const FVector Position)
{
	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		GEngine->XRSystem->SetBasePosition(Position);
	}
}

FRotator UInnerLoopFunctionLibrary::GetBaseRotation()
{
	return GEngine->XRSystem->GetBaseRotation();
}

void UInnerLoopFunctionLibrary::SetBaseRotation(const FRotator Rotation)
{
	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		GEngine->XRSystem->SetBaseRotation(Rotation);
	}
}

FTransform UInnerLoopFunctionLibrary::GetBaseRotationAndPosition()
{
	return FTransform(GEngine->XRSystem->GetBaseRotation(), GEngine->XRSystem->GetBasePosition());
}

void UInnerLoopFunctionLibrary::SetBaseRotationAndPosition(const FTransform Transform)
{
	const FRotator Rotation = Transform.Rotator();
	const FVector Position = Transform.GetLocation();

	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		GEngine->XRSystem->SetBaseRotation(Rotation);
		GEngine->XRSystem->SetBasePosition(Position);
	}
}

void UInnerLoopFunctionLibrary::ResetOrientationAndPositionZ(const float Yaw, const EOrientPositionSelector::Type Options, const bool bKeepZ)
{
	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		const FVector OldBasePosition = GEngine->XRSystem->GetBasePosition();
		
		switch (Options)
		{
		case EOrientPositionSelector::Orientation:
			GEngine->XRSystem->ResetOrientation(Yaw);
			break;
		case EOrientPositionSelector::Position:
			GEngine->XRSystem->ResetPosition();
			break;
		default:
			GEngine->XRSystem->ResetOrientationAndPosition(Yaw);
		}

		if (bKeepZ == true)
		{
			const FVector BasePosition = GEngine->XRSystem->GetBasePosition();

			const FVector NewPosition = FVector(BasePosition.X, BasePosition.Y, OldBasePosition.Z);

			GEngine->XRSystem->SetBasePosition(NewPosition);
		}
	}
}

UTexture* UInnerLoopFunctionLibrary::GetSpectatorScreenTexture()
{
	IHeadMountedDisplay* HMD = GEngine->XRSystem.IsValid() ? GEngine->XRSystem->GetHMDDevice() : nullptr;
	if (HMD)
	{
		const ISpectatorScreenController* Controller = HMD->GetSpectatorScreenController();
		return Controller->GetSpectatorScreenTexture();	
	}

	return nullptr;
}

FName UInnerLoopFunctionLibrary::GetHMDSystemName()
{	
	return GEngine->XRSystem.IsValid() ? GEngine->XRSystem->GetSystemName() : "";
}

// --------------------
// System Info
// --------------------

FName UInnerLoopFunctionLibrary::RHIAdapterName()
{
	return FName(*GRHIAdapterName);
}

FName UInnerLoopFunctionLibrary::RHIVendorName()
{
	return FName(RHIVendorIdToString());
}

FName UInnerLoopFunctionLibrary::RHIShaderFormatName()
{
	return FName(LegacyShaderPlatformToShaderFormat(GMaxRHIShaderPlatform));
}

FString UInnerLoopFunctionLibrary::CPUBrand()
{
#if PLATFORM_WINDOWS
	return FWindowsPlatformMisc::GetCPUBrand();
#elif PLATFORM_ANDROID
	return FAndroidMisc::GetCPUBrand();
#else
	//this is a pointless stub since we don't care what CPU other platforms have
	return "Unknown";
#endif
}

FString UInnerLoopFunctionLibrary::CPUChipset()
{
#if PLATFORM_WINDOWS
	return FWindowsPlatformMisc::GetCPUChipset();
#elif PLATFORM_ANDROID
	return 	FAndroidMisc::GetCPUChipset();
#else
	//this is a pointless stub since we don't care what CPU other platforms have
	return "Unknown";
#endif
}

FString UInnerLoopFunctionLibrary::CPUVendor()
{
#if PLATFORM_WINDOWS
	return FWindowsPlatformMisc::GetCPUVendor();
#elif PLATFORM_ANDROID
	return FAndroidMisc::GetCPUVendor();
#else
	//this is a pointless stub since we don't care what CPU other platforms have
	return "Unknown";
#endif
}

// --------------------
// Misc
// --------------------

void UInnerLoopFunctionLibrary::UnloadStreamingLevel(ULevelStreamingDynamic* LevelInstance)
{
	if (LevelInstance)
	{
		LevelInstance->SetShouldBeLoaded(false);
		LevelInstance->SetShouldBeVisible(false);
		LevelInstance->SetIsRequestingUnloadAndRemoval(true);
	}
}

float UInnerLoopFunctionLibrary::GetCustomDataValue(UInstancedStaticMeshComponent* InstancedStaticMeshComponent, const int32 InstanceIndex, const int32 CustomDataIndex)
{
	// Expose Per Instance Custom Data as float (>=4.25 only!)
	
	float CustomDataValue = 0.0f;

#if (ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25) || ENGINE_MAJOR_VERSION >= 5
	
	if (InstancedStaticMeshComponent->PerInstanceSMData.IsValidIndex(InstanceIndex))
	{
		CustomDataValue = InstancedStaticMeshComponent->PerInstanceSMCustomData[InstanceIndex * InstancedStaticMeshComponent->NumCustomDataFloats + CustomDataIndex];
	}
	
#endif

	return CustomDataValue;
}

void UInnerLoopFunctionLibrary::ArbitraryUndefinedBehavior()
{
	UE_LOG(LogInnerLoopLLC, Fatal, TEXT("%s"), *FString("Arbitrary undefined behavior."));
}
