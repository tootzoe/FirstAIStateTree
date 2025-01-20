// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FirstAIStateTree : ModuleRules
{
	public FirstAIStateTree(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject",
            "Engine", "InputCore",
            "EnhancedInput", "AIModule" });
	}
}
