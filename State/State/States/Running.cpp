#include "Running.h"

Running::Running()
{
}

Running::~Running()
{
}

bool Running::RunningRobot(Controller *controller)
{
	state_ = std::make_unique<Running>();
	controller->SetCurrentState(std::move(state_));
	std::cout << "[Running] Robot in running state..." << std::endl;
	return true;
}

bool Running::StoppedRobot(Controller *controller)
{
	std::cout << "[Running] -> [Stopped] Running State changed to Stopped State" << std::endl;
	controller->SetCurrentState(std::move(std::make_unique<Stopped>()));
	return controller->SendCommand(Command::STOPPED);
}