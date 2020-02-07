#include "RobotHandler.h"

RobotHandler::RobotHandler()
{
}

RobotHandler::~RobotHandler()
{
}

std::string RobotHandler::Run()
{
	return model_->MotorDriveControl();
}
