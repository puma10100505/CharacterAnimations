// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CharacterAnimations : ModuleRules
{
	public CharacterAnimations(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
