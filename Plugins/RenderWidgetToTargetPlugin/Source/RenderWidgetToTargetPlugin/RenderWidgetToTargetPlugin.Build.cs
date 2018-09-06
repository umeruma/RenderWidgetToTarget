// Some copyright should be here...

using UnrealBuildTool;

public class RenderWidgetToTargetPlugin : ModuleRules
{
    public RenderWidgetToTargetPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));


        PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "UMG",
                "Projects",
                "RenderCore"
				// ... add other public dependencies that you statically link with here ...
			}
			);
	}
}
