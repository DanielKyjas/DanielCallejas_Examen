// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PS5_CPP : ModuleRules
{
	public PS5_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
