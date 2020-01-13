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
#include "Kismet/GameplayStatics.h"

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
	FString ProjectVersion;

	GConfig->GetString(TEXT("/Script/EngineSettings.GeneralProjectSettings"), TEXT("ProjectVersion"), ProjectVersion, GGameIni);

	FString UpdatedVersion = ProjectVersion + Version;
	
	GConfig->SetString(TEXT("/Script/EngineSettings.GeneralProjectSettings"), TEXT("ProjectVersion"), *UpdatedVersion, GGameIni);
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

void UInnerLoopFunctionLibrary::ResetOrientationAndPosition(float Yaw, EOrientPositionSelector::Type Options, bool KeepZ)
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

FString UInnerLoopFunctionLibrary::GetTextFromFile(FString File)
{
	FString FileData = "";
	
	FFileHelper::LoadFileToString(FileData, *File);

	return FileData;
}

FString UInnerLoopFunctionLibrary::GetGPUAdapterName()
{
	return GRHIAdapterName;
}

FName UInnerLoopFunctionLibrary::RHIVendorName()
{
	return FName(RHIVendorIdToString());
}

void UInnerLoopFunctionLibrary::PrintToLog(const FString& InString)
{
	
	FString Prefix = "InnerLoop Log: ";
	FString FinalString = Prefix + *InString;
	
	UE_LOG(LogBlueprintUserMessages, Log, TEXT("%s"), *FinalString);
}