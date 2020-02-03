#include "GuiComponent.h"

GuiComponent::GuiComponent()
{
}

GuiComponent::~GuiComponent()
{
}

GuiData * GuiComponent::RestoreGuiComponent(GuiData *guiData)
{
	guiData_.reset(guiData);
	return guiData_.get();
}

GuiData * GuiComponent::CreateGuiData()
{
	guiData_ = std::make_unique<GuiData>();
	return guiData_.get();
}

GuiData * GuiComponent::SaveGuiState()
{
	GuiData *data = guiData_->GetCopy();
	return data;
}
