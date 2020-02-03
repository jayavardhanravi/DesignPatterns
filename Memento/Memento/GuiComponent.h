#pragma once
#include "Component.h"

class GuiComponent : public Component
{
public:
	GuiComponent();
	~GuiComponent();

	GuiData * RestoreGuiComponent(GuiData *);
	GuiData * CreateGuiData();
	GuiData * SaveGuiState();

private:
	std::unique_ptr<GuiData> guiData_;
};

