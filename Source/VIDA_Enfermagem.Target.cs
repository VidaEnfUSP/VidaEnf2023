// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class VIDA_EnfermagemTarget : TargetRules
{
	public VIDA_EnfermagemTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "VIDA_Enfermagem" } );
	}
}
