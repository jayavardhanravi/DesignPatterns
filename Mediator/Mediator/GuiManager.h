#pragma once
#include <string>
#include <map>

#include "Commons.h"
#include "GuiComponent.h"

class GuiComponent;
class GuiManager
{
public:
	virtual ~GuiManager() {};

	virtual void Broadcast(Module, const std::string&) = 0;
	virtual void Broadcast(const std::string&) = 0;
	virtual void Register(Module, GuiComponent *) = 0;

protected:
	std::map<int, GuiComponent *> internalModules;
	std::map<int, GuiComponent *> externalModules;
	std::map<int, GuiComponent *> logModules;
};
