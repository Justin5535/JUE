// © Justin Renaud-Gélinas, 2026


#include "JUEActionContext.h"

#include "CommonActionWidget.h"
#include "CommonTextBlock.h"

void UJUEActionContext::SetInputActions(const TArray<FDataTableRowHandle>& NewInputActions)
{
	InputActions = NewInputActions;
	ActionWidget->SetInputActions(InputActions);
}

void UJUEActionContext::NativeConstruct()
{

	ActionWidget->SetInputActions(InputActions);

	if (IsValid(ActionTextWidget))
	{
		ActionTextWidget->SetText(ActionName);
	}
	
	Super::NativeConstruct();
}
