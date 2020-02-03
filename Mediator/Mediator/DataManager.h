#pragma once
#include "GuiManager.h"
class DataManager :	public GuiManager
{
public:
	DataManager();
	~DataManager();

	void Broadcast(Module, const std::string&);
	void Broadcast(const std::string&);
	void Register(Module, GuiComponent *);
};

