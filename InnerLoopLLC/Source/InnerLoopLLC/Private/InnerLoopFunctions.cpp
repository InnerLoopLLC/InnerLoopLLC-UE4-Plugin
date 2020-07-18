// Copyright 2019 InnerLoop LLC. All Rights Reserved.

#include "InnerLoopFunctions.h"
#include "InnerLoopLLC.h"

#include "CoreGlobals.h"
#include "CoreMinimal.h"

#include "HeadMountedDisplayFunctionLibrary.h"
#include "EngineGlobals.h"
#include "Engine/Engine.h"
#include "GameFramework/WorldSettings.h"
#include "IHeadMountedDisplay.h"
#include "IXRTrackingSystem.h"
#include "ISpectatorScreenController.h"
#include "IXRSystemAssets.h"
#include "Components/PrimitiveComponent.h"
#include "Features/IModularFeatures.h"
#include "XRMotionControllerBase.h"
#include "XRTrackingSystemBase.h"
#include "Misc/FileHelper.h"
#include "Runtime/RHI/Public/RHI.h"
#include "Runtime/RHI/Public/RHIDefinitions.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LevelStreamingDynamic.h"
//#include "GenericPlatform/GenericPlatform.h"

UInnerLoopFunctionLibrary::UInnerLoopFunctionLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool UInnerLoopFunctionLibrary::WithEditor()
{
#if WITH_EDITOR

	return true;

#endif //WITH_EDITOR

	return false;
}

void UInnerLoopFunctionLibrary::IsWithEditor(EBoolBranches& Branch)
{
#if WITH_EDITOR

	Branch = EBoolBranches::_True;

#else

	Branch = EBoolBranches::_False;

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

void UInnerLoopFunctionLibrary::SetBaseRotationAndPosition(FVector Position, FRotator Rotation)
{
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

FString UInnerLoopFunctionLibrary::GetTextFromFile(FString File)
{
	FString FileData = "";
	
	FFileHelper::LoadFileToString(FileData, *File);

	return FileData;
}

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
	return FGenericPlatformMisc::GetCPUBrand();
}

FString UInnerLoopFunctionLibrary::CPUChipset()
{
	return FGenericPlatformMisc::GetCPUChipset();
}

FString UInnerLoopFunctionLibrary::CPUVendor()
{
	return FGenericPlatformMisc::GetCPUVendor();
}

void UInnerLoopFunctionLibrary::PrintToLog(const FString& InPrefix, const FString& InString)
{
	
	FString Prefix = "InnerLoop Log: ";
	FString FinalString = Prefix + *InPrefix + *InString;
	
	UE_LOG(LogBlueprintUserMessages, Log, TEXT("%s"), *FinalString);
}

void UInnerLoopFunctionLibrary::UnloadStreamingLevel(ULevelStreamingDynamic* LevelInstance)
{
	if (LevelInstance)
	{
		LevelInstance->SetShouldBeLoaded(false);
		LevelInstance->SetShouldBeVisible(false);
		LevelInstance->SetIsRequestingUnloadAndRemoval(true);
	}
}