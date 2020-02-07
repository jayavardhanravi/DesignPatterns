#include "Initialize.h"

Initialize::Initialize()
{
}

Initialize::~Initialize()
{
}

bool Initialize::InitRobot(Controller *controller)
{
	state_ = std::make_unique<Initialize>();
	controller->SetCurrentState(std::move(state_));
	std::cout << "[Init] Initializing the Robot..." << std::endl;
	return true;
}

bool Initialize::ReadyRobot(Controller *controller)
{
	std::cout << "[Init] -> [Ready] Init State changed to Ready State" << std::endl;
	controller->SetCurrentState(std::move(std::make_unique<Ready>()));
	controller->SendCommand(Command::READY);
	return true;
}