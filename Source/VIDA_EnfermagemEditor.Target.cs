// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class VIDA_EnfermagemEditorTarget : TargetRules
{
	public VIDA_EnfermagemEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "VIDA_Enfermagem" } );
	}
}
