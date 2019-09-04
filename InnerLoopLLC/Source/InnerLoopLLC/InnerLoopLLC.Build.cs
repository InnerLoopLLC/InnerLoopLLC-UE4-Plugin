// Copyright 2019 InnerLoop LLC. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class InnerLoopLLC : ModuleRules
{
    public InnerLoopLLC(ReadOnlyTargetRules Target) : base(Target)
    {
        //PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        //PublicIncludePaths.AddRange(
		//	new string[] 
		//	{
        //        "Kismet/Public",
        //        "Kismet/Classes"
        //    }
		//	);

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
