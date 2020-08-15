// Copyright 2020 InnerLoop LLC. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class InnerLoopLLC : ModuleRules
{
    public InnerLoopLLC(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "HeadMountedDisplay",
                "Projects"
            }
            );

        PrivateDependencyModuleNames.AddRange(
			new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "HeadMountedDisplay",
                "Projects",
				"RHI"
            }
			);
    }
}
