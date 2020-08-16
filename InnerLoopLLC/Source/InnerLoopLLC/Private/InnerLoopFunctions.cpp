// Copyright 2020 InnerLoop LLC. All Rights Reserved.

#include "InnerLoopFunctions.h"

UInnerLoopFunctionLibrary::UInnerLoopFunctionLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

// --------------------
// General functions
// --------------------

bool UInnerLoopFunctionLibrary::WithEditor()
{
#if WITH_EDITOR

	return true;

#endif //WITH_EDITOR

	return false;
}

void UInnerLoopFunctionLibrary::IsWithEditor(EBoolBranch& Branch)
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

void UInnerLoopFunctionLibrary::PrintToLog(const FString Prefix, const FString String)
{
	FString FinalString = Prefix + String;
	UE_LOG(LogInnerLoopLLC, Log, TEXT("%s"), *FinalString);
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

void UInnerLoopFunctionLibrary::ResetOrientationAndPositionZ(float Yaw, EOrientPositionSelector::Type Options, bool KeepZ)
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

		if (KeepZ == true)
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