// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class adapterES : ModuleRules
{
	public adapterES(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
