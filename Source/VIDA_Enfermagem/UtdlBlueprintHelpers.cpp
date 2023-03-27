// Fill out your copyright notice in the Description page of Project Settings.

#include "UtdlBlueprintHelpers.h"

UtdlBlueprintHelpers::UtdlBlueprintHelpers()
{
}

UtdlBlueprintHelpers::~UtdlBlueprintHelpers()
{
}

/**
* Set the Actor's tick group which is when it gets it's Tick event called.  See the C++ manuals.
**/
void UtdlBlueprintHelpers::SetTickGroup(AActor * actor, int32 tickGroupEnumIndex)
{
	if (actor == NULL)
	{
		return;
	}
	actor->SetTickGroup((ETickingGroup)tickGroupEnumIndex);
}