#pragma once
#include "GuiData.h"

class Component
{
public:
	virtual ~Component() {};

	virtual GuiData * RestoreGuiComponent(GuiData *guiData) { return guiData; };
	virtual GuiData * CreateGuiData() { return nullptr; };
	virtual	GuiData * SaveGuiState() { return nullptr; };
};
