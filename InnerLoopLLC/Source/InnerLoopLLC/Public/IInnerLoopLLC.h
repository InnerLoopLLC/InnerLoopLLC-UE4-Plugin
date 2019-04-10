// Copyright 2019 InnerLoop LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

class IInnerLoopLLC : public IModuleInterface
{
	public:

	static inline IInnerLoopLLC& Get()
	{
		return FModuleManager::LoadModuleChecked< IInnerLoopLLC >("InnerLoopLLC");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("InnerLoopLLC");
	}
};