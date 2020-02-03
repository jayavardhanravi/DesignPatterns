#include "ButtonComponent.h"

ButtonComponent::ButtonComponent(int key)
{
	SetGuiId(key);
}

ButtonComponent::~ButtonComponent()
{
}

void ButtonComponent::SetGuiId(int key)
{
	guiId_ = key;
}

void ButtonComponent::SendData(Module module, const std::string &data)
{
	std::cout << "Data SEND by Button GUI Component : " << std::to_string(guiId_) << " -> " << data << std::endl;
	if(guiManager_)
		guiManager_->Broadcast(module, data);
}

void ButtonComponent::SendData(const std::string &data)
{
	std::cout << "Data SEND by Button GUI Component to ALL : " << std::to_string(guiId_) << " -> " << data << std::endl;
	if (guiManager_)
		guiManager_->Broadcast(data);
}

std::string ButtonComponent::ReceiveData(const std::string &data)
{
	std::cout << "Data RECEIVED by Button GUI Component : " << std::to_string(guiId_) << " -> " << data << std::endl;
	return "Data Received";
}
