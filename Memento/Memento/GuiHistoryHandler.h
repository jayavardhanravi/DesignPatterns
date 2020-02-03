#pragma once
#include <vector>
#include "Component.h"

class GuiHistoryHandler
{
public:
	GuiHistoryHandler(Component *);
	~GuiHistoryHandler();

	void SaveCurrentState();
	GuiData * RestorePreviousState();

	int GetNumberOfSavedStates();

private:
	Component *component_ = nullptr;
	std::vector<GuiData *> savedStates;
};

