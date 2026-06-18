// © Justin Renaud-Gélinas, 2026


#include "JUEActionContext.h"

#include "CommonActionWidget.h"
#include "CommonTextBlock.h"

void UJUEActionContext::NativePreConstruct()
{

	ActionWidget->SetInputActions(InputActions);

	if (IsValid(ActionTextWidget))
	{
		ActionTextWidget->SetText(ActionName);
	}
	
	Super::NativePreConstruct();
}
