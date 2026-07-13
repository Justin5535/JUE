// © Justin Renaud-Gélinas, 2025


#include "JUEDevelopmentStatics.h"

#include "JUESystemStatics.h"

void UJUEDevelopmentStatics::ReportErrorMessage(const FString& ErrorMessage, int32 MessageKey)
{
	if (UJUESystemStatics::IsInBuildShipping()) return;
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(MessageKey, 10, FColor::Red, "ERROR: " + ErrorMessage);
	}
	UE_LOG(LogTemp, Error, TEXT("%s"), *ErrorMessage);
}

void UJUEDevelopmentStatics::ReportWarningMessage(const FString& WarningMessage, int32 MessageKey)
{
	if (UJUESystemStatics::IsInBuildShipping()) return;
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(MessageKey, 7, FColor::Orange, "WARNING : " + WarningMessage);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *WarningMessage);
}

void UJUEDevelopmentStatics::ReportDebugMessage(const FString& DebugMessage, int32 MessageKey)
{
	if (UJUESystemStatics::IsInBuildShipping()) return;
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(MessageKey, 4, FColor::Green, "Debug : " + DebugMessage);
	}
	UE_LOG(LogTemp, Display, TEXT("%s"), *DebugMessage);
}
