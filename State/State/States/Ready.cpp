#include "Ready.h"

Ready::Ready()
{
}

Ready::~Ready()
{
}

bool Ready::ReadyRobot(Controller *controller)
{
	state_ = std::make_unique<Ready>();
	controller->SetCurrentState(std::move(state_));
	std::cout << "[Ready] Preparing the Robot to ReadyState..." << std::endl;
	return true;
}

bool Ready::RunningRobot(Controller *controller)
{
	std::cout << "[Ready] -> [Running] Ready State changed to Running State" << std::endl;
	controller->SetCurrentState(std::move(std::make_unique<Running>()));
	return controller->SendCommand(Command::RUNNING);
}

bool Ready::StoppedRobot(Controller *controller)
{
	std::cout << "[Ready] -> [Running] Ready State changed to Stopped State" << std::endl;
	controller->SetCurrentState(std::move(std::make_unique<Stopped>()));
	return controller->SendCommand(Command::STOPPED);
}