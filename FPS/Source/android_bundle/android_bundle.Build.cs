// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class android_bundle : ModuleRules
{
	public android_bundle(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
