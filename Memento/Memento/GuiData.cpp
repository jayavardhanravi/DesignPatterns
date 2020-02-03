#include "GuiData.h"

GuiData::GuiData()
{
}

GuiData::~GuiData()
{
}

void GuiData::SetData(int data)
{
	data_ = data;
}

void GuiData::SetChecked(bool checked)
{
	checked_ = checked;
}

void GuiData::SetLabel(const std::string &label)
{
	label_ = label;
}

int GuiData::GetData()
{
	return data_;
}

bool GuiData::GetChecked()
{
	return checked_;
}

std::string GuiData::GetLabel()
{
	return label_;
}

GuiData * GuiData::GetCopy()
{
	GuiData *tmpObject = new GuiData();
	tmpObject->SetChecked(this->GetChecked());
	tmpObject->SetData(this->GetData());
	tmpObject->SetLabel(this->GetLabel());

	return tmpObject;
}

std::string GuiData::PrintState()
{
	return "Info : data = " + std::to_string(this->GetData()) + " checked = " + std::to_string(this->GetChecked()) + " label = " + this->GetLabel();
}