// Fill out your copyright notice in the Description page of Project Settings.


#include "JUESystemStatics.h"

bool UJUESystemStatics::IsInEditor()
{
	
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}

bool UJUESystemStatics::IsInBuild()
{
	return !IsInEditor();
}

bool UJUESystemStatics::IsInBuildDevelopment()
{
	if (!IsInEditor())
	{
#if UE_BUILD_DEVELOPMENT
		return true;
#endif
		
	}
	return false;
}

bool UJUESystemStatics::IsInBuildShipping()
{
	if (!IsInEditor())
	{
	#if UE_BUILD_SHIPPING
		return true;
	#endif
	}
	
	return false;
}
