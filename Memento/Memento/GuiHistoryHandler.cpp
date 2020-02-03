#include "GuiHistoryHandler.h"

GuiHistoryHandler::GuiHistoryHandler(Component *component) : component_(component)
{
}

GuiHistoryHandler::~GuiHistoryHandler()
{
}

void GuiHistoryHandler::SaveCurrentState()
{
	savedStates.push_back(component_->SaveGuiState());
}

GuiData * GuiHistoryHandler::RestorePreviousState()
{
	if (!savedStates.empty())
	{
		savedStates.pop_back();
		if(!savedStates.empty())
			return component_->RestoreGuiComponent(savedStates.back());
	}
	return nullptr;
}

int GuiHistoryHandler::GetNumberOfSavedStates()
{
	return savedStates.size();
}
