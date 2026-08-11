// © Justin Renaud-Gélinas, 2026

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"

#include "JUEActionContext.generated.h"

/**
 * 
 */
UCLASS()
class JUE_API UJUEActionContext : public UCommonUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetInputActions(const TArray<FDataTableRowHandle>& NewInputActions);

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(BindWidget))
	class UCommonActionWidget* ActionWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(BindWidgetOptional))
	class UCommonTextBlock* ActionTextWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Action Context Parameters", meta=(EditCondition="ActionTextWidget != nullptr"))
	FText ActionName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Action Context Parameters")
	TArray<FDataTableRowHandle> InputActions;

public:
	virtual void NativeConstruct() override;
	
};
