// Copyright 2020 InnerLoop LLC. All Rights Reserved.

#include "InnerLoopLLC.h"

class FInnerLoopLLC : public InnerLoopLLC
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