#pragma once
#include "GuiComponent.h"
class ButtonComponent :	public GuiComponent
{
public:
	ButtonComponent() = delete;
	ButtonComponent(int);
	~ButtonComponent();

	void SetGuiId(int);
	void SendData(Module, const std::string&);
	void SendData(const std::string&);
	std::string ReceiveData(const std::string&);
};

