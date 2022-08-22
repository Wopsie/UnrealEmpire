// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Empires : ModuleRules
{
	public Empires(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
