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

#endif //WITH_EDITOR

	return false;
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
	
	GConfig->GetString(TEXT("/Script/EngineSettings.GeneralProjectSettings"), TEXT("ProjectVersion"), ProjectVersion, GGameIni);
	   	
	return ProjectVersion;
}

void UInnerLoopFunctionLibrary::SetProjectVersion(FString Version)
{
	GConfig->SetString(TEXT("/Script/EngineSettings.GeneralProjectSettings"), TEXT("ProjectVersion"), *Version, GGameIni);
}

FString UInnerLoopFunctionLibrary::GetTextFromFile(FString File)
{
	FString FileData = "";

	FFileHelper::LoadFileToString(FileData, *File);

	return FileData;
}

ELogVerbosityBP UInnerLoopFunctionLibrary::GetLogVerbosity()
{
	ELogVerbosity::Type LogVerbosity = UE_GET_LOG_VERBOSITY(LogInnerLoopLLC);
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

void UInnerLoopFunctionLibrary::PrintToLog(const ELogVerbosityBP Verbosity, const FString Prefix, const FString String, bool bPrintToScreen, float Duration)
{
	FString FinalString = Prefix + String;
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
	FVector BasePosition = GEngine->XRSystem->GetBasePosition();

	return BasePosition;
}

void UInnerLoopFunctionLibrary::SetBasePosition(FVector Position)
{
	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		GEngine->XRSystem->SetBasePosition(Position);
	}
}

FRotator UInnerLoopFunctionLibrary::GetBaseRotation()
{
	FRotator BaseRotation = GEngine->XRSystem->GetBaseRotation();

	return BaseRotation;
}

void UInnerLoopFunctionLibrary::SetBaseRotation(FRotator Rotation)
{
	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		GEngine->XRSystem->SetBaseRotation(Rotation);
	}
}

FTransform UInnerLoopFunctionLibrary::GetBaseRotationAndPosition()
{
	FRotator BaseRotation = GEngine->XRSystem->GetBaseRotation();
	FVector BasePosition = GEngine->XRSystem->GetBasePosition();

	return FTransform(BaseRotation, BasePosition);
}

void UInnerLoopFunctionLibrary::SetBaseRotationAndPosition(FTransform Transform)
{
	FRotator Rotation = Transform.Rotator();
	FVector Position = Transform.GetLocation();

	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		GEngine->XRSystem->SetBaseRotation(Rotation);
		GEngine->XRSystem->SetBasePosition(Position);
	}
}

void UInnerLoopFunctionLibrary::ResetOrientationAndPositionZ(float Yaw, EOrientPositionSelector::Type Options, bool bKeepZ)
{
	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		FVector OldBasePosition = GEngine->XRSystem->GetBasePosition();
		
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
			FVector BasePosition = GEngine->XRSystem->GetBasePosition();

			FVector NewPosition = FVector(BasePosition.X, BasePosition.Y, OldBasePosition.Z);

			GEngine->XRSystem->SetBasePosition(NewPosition);
		}
	}
}

UTexture* UInnerLoopFunctionLibrary::GetSpectatorScreenTexture()
{
	IHeadMountedDisplay* HMD = GEngine->XRSystem.IsValid() ? GEngine->XRSystem->GetHMDDevice() : nullptr;
	if (HMD)
	{
		ISpectatorScreenController* const Controller = HMD->GetSpectatorScreenController();
		return Controller->GetSpectatorScreenTexture();	
	}

	return nullptr;
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
#endif
#if PLATFORM_ANDROID
		return FAndroidMisc::GetCPUBrand();
#endif
#if PLATFORM_PS4
		//this is a pointless stub since we don't care what CPU the PS4 has
		return "PS4 CPU";
#endif
}

FString UInnerLoopFunctionLibrary::CPUChipset()
{
#if PLATFORM_WINDOWS
	return FWindowsPlatformMisc::GetCPUChipset();
#endif
#if PLATFORM_ANDROID
	return 	FAndroidMisc::GetCPUChipset();
#endif
#if PLATFORM_PS4
	//this is a pointless stub since we don't care what CPU the PS4 has
	return "PS4 CPU";
#endif
}

FString UInnerLoopFunctionLibrary::CPUVendor()
{
#if PLATFORM_WINDOWS
	return FWindowsPlatformMisc::GetCPUVendor();
#endif
#if PLATFORM_ANDROID
	return FAndroidMisc::GetCPUVendor();
#endif
#if PLATFORM_PS4
	//this is a pointless stub since we don't care what CPU the PS4 has
	return "PS4 CPU";
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

float UInnerLoopFunctionLibrary::GetCustomDataValue(UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int32 InstanceIndex, int32 CustomDataIndex)
{
	// Expose Per Instance Custom Data as float (>=4.25 only!)
	
	float CustomDataValue = 0.0f;

#if ENGINE_MINOR_VERSION >= 25
	
	if (InstancedStaticMeshComponent->PerInstanceSMData.IsValidIndex(InstanceIndex))
	{
		CustomDataValue = InstancedStaticMeshComponent->PerInstanceSMCustomData[InstanceIndex * InstancedStaticMeshComponent->NumCustomDataFloats + CustomDataIndex];
	}
	
#endif

	return CustomDataValue;
}