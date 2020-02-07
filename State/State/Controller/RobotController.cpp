#include "RobotController.h"

RobotController::RobotController(std::unique_ptr<RobotState> initState)
{
	SetCurrentState(std::move(initState));
	SendCommand(Command::INIT);
}

RobotController::~RobotController()
{
}

void RobotController::SetCurrentState(std::unique_ptr<RobotState> currentState)
{
	if (currentState)
		currentState_ = std::move(currentState);
}

bool RobotController::SendCommand(Command command)
{
	bool commandExecuted = false;
	switch (command)
	{
	case INIT:
		commandExecuted = currentState_->InitRobot(this);
		break;
	case READY:
		commandExecuted = currentState_->ReadyRobot(this);
		break;
	case RUNNING:
		commandExecuted = currentState_->RunningRobot(this);
		break;
	case STOPPED:
		commandExecuted = currentState_->StoppedRobot(this);
		break;
	case SHUTDOWN:
		commandExecuted = currentState_->ShutdownRobot(this);
		break;
	default:
		break;
	}
	return commandExecuted;
}
