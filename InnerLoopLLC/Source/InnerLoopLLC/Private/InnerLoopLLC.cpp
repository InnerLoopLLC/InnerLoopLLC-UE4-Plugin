// Copyright 2019 InnerLoop LLC. All Rights Reserved.

#include "InnerLoopLLC.h"

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FInnerLoopLLC : public IInnerLoopLLC
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FInnerLoopLLC, InnerLoopLLC)

void FInnerLoopLLC::StartupModule()
{
}


void FInnerLoopLLC::ShutdownModule()
{
}