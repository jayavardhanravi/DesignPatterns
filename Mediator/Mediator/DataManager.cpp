#include "DataManager.h"

DataManager::DataManager()
{
}

DataManager::~DataManager()
{
}

void DataManager::Broadcast(const std::string& data)
{
	for (auto &item : internalModules)
		(item.second)->ReceiveData(data);

	for (auto &item : externalModules)
		(item.second)->ReceiveData(data);

	for (auto &item : logModules)
		(item.second)->ReceiveData(data);
}

void DataManager::Broadcast(Module module, const std::string& data)
{
	switch (module)
	{
	case Module::INTERNAL:
	{
		for (auto &item : internalModules)
		{
			(item.second)->ReceiveData(data);
		}
		break;
	}
	case Module::EXTERNAL:
	{
		for (auto &item : externalModules)
		{
			(item.second)->ReceiveData(data);
		}
		break;
	}
	case Module::LOGGING:
	{
		for (auto &item : logModules)
		{
			(item.second)->ReceiveData(data);
		}
		break;
	}
	default:
		break;
	}
}

void DataManager::Register(Module module, GuiComponent *guiComponent)
{
	switch (module)
	{
	case Module::INTERNAL:
	{
		if (internalModules.find(guiComponent->GuiId()) == internalModules.end())
			internalModules.insert(std::pair<int, GuiComponent*>(guiComponent->GuiId(), guiComponent));
		break;
	}
	case Module::EXTERNAL:
	{
		if (externalModules.find(guiComponent->GuiId()) == externalModules.end())
			externalModules.insert(std::pair<int, GuiComponent*>(guiComponent->GuiId(), guiComponent));
		break;
	}
	case Module::LOGGING:
	{
		if (logModules.find(guiComponent->GuiId()) == logModules.end())
			logModules.insert(std::pair<int, GuiComponent*>(guiComponent->GuiId(), guiComponent));
		break;
	}
	default:
		break;
	}
}
