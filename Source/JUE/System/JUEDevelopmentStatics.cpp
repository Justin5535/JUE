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
		GEngine->AddOnScreenDebugMessage(MessageKey, 7, FColor::Red, "Warning: " + WarningMessage);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *WarningMessage);
}
