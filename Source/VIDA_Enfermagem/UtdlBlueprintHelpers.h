// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class VIDA_ENFERMAGEM_API UtdlBlueprintHelpers
{
public:
	UtdlBlueprintHelpers();
	~UtdlBlueprintHelpers();

	/**
	* Set the Actor's tick group.  See ETickingGroup.   TG_PostUpdateWork is number 8 and is equivalent to Untiy's LateUpdate (sort of)
	*/
	UFUNCTION(BlueprintCallable, Category = TDLHelpers)
		static void SetTickGroup(AActor * actor, int32 tickGroupEnumIndex = 8);
};
