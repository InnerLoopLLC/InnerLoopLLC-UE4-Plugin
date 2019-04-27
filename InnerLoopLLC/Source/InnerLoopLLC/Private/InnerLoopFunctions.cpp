// Copyright 2019 InnerLoop LLC. All Rights Reserved.

#include "InnerLoopFunctions.h"
#include "InnerLoopLLC.h"

#include "CoreGlobals.h"
//#include "ConfigCacheIni.h"
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

UInnerLoopFunctionLibrary::UInnerLoopFunctionLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool UInnerLoopFunctionLibrary::AlwaysTrue()
{
	return true;
}

FString UInnerLoopFunctionLibrary::GetProjectVersion()
{
	FString ProjectVersion;
	
	GConfig->GetString(TEXT("/Script/EngineSettings.GeneralProjectSettings"), TEXT("ProjectVersion"), ProjectVersion, GGameIni);
	
	//FString ProjectVersion = TEXT("Test String");

	return ProjectVersion;
}

void UInnerLoopFunctionLibrary::SetCenterPosition(float Xpos, float Ypos)
{
	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		
		FVector BasePosition = GEngine->XRSystem->GetBasePosition();
		
		FVector NewPosition = FVector(Xpos, Ypos, BasePosition.Z);

		GEngine->XRSystem->SetBasePosition(NewPosition);
		
	}
}

FVector UInnerLoopFunctionLibrary::GetHMDPosition()
{
	FVector HMDPos;
	FQuat HMDOrientation;
	
	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		GEngine->XRSystem->GetCurrentPose(IXRTrackingSystem::HMDDeviceId, HMDOrientation, HMDPos);
	}

	return HMDPos;
}

FVector UInnerLoopFunctionLibrary::GetBasePosition()
{
	FVector BasePosition = GEngine->XRSystem->GetBasePosition();

	return BasePosition;
}

void UInnerLoopFunctionLibrary::SetBasePositionZ(float Zpos)
{
	if (GEngine->XRSystem.IsValid() && GEngine->XRSystem->IsHeadTrackingAllowed())
	{

		FVector BasePosition = GEngine->XRSystem->GetBasePosition();

		FVector NewPosition = FVector(BasePosition.X, BasePosition.Y, Zpos);

		GEngine->XRSystem->SetBasePosition(NewPosition);

	}
}

FString UInnerLoopFunctionLibrary::GetTextFromFile(FString File)
{
	FString FileData = "";
	
	FFileHelper::LoadFileToString(FileData, *File);

	return FileData;
}