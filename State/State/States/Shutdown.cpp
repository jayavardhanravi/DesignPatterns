#include "Shutdown.h"

Shutdown::Shutdown()
{
}

Shutdown::~Shutdown()
{
}

bool Shutdown::ShutdownRobot(Controller *controller)
{
	state_ = std::make_unique<Shutdown>();
	controller->SetCurrentState(std::move(state_));
	std::cout << "[Shutdown] Robot in shutdown state..." << std::endl;
	return true;
}

bool Shutdown::InitRobot(Controller *controller)
{
	std::cout << "[Shutdown] -> [Init] Shutdown State changed to Init State" << std::endl;
	controller->SetCurrentState(std::move(std::make_unique<Initialize>()));
	return controller->SendCommand(Command::INIT);
}