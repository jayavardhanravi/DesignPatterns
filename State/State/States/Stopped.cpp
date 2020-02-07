#include "Stopped.h"

Stopped::Stopped()
{
}

Stopped::~Stopped()
{
}

bool Stopped::StoppedRobot(Controller *controller)
{
	state_ = std::make_unique<Stopped>();
	controller->SetCurrentState(std::move(state_));
	std::cout << "[Stopped] Robot in stopped state..." << std::endl;
	return true;
}

bool Stopped::ShutdownRobot(Controller *controller)
{
	std::cout << "[Stopped] -> [ShutDown] Stopped State changed to Shutdown State" << std::endl;
	controller->SetCurrentState(std::move(std::make_unique<Shutdown>()));
	return controller->SendCommand(Command::SHUTDOWN);
}

bool Stopped::ReadyRobot(Controller *controller)
{
	std::cout << "[Stopped] -> [Ready] Stopped State changed to Ready State" << std::endl;
	controller->SetCurrentState(std::move(std::make_unique<Ready>()));
	return controller->SendCommand(Command::READY);
}