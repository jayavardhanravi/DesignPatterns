#pragma once
#include <string>

#include "Commons.h"
#include "GuiManager.h"

class GuiManager;
class GuiComponent
{
public:
	virtual ~GuiComponent() {};

	virtual int GuiId() { return guiId_; };
	virtual void SetGuiId(int) = 0;
	virtual void SendData(Module, const std::string&) = 0;
	virtual void SendData(const std::string&) = 0;
	virtual std::string ReceiveData(const std::string&) = 0;

	virtual void AttachToGuiManager(GuiManager *guiManager) { guiManager_ = guiManager; };

protected:
	GuiManager *guiManager_ = nullptr;
	int guiId_ = 0;
};
