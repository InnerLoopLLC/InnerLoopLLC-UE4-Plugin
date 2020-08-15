// Copyright 2020 InnerLoop LLC. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class InnerLoopLLC : public IModuleInterface
{
public:

	static inline InnerLoopLLC& Get()
	{
		return FModuleManager::LoadModuleChecked< InnerLoopLLC >("InnerLoopLLC");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("InnerLoopLLC");
	}
};