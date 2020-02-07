#include "PidController.h"

PidController::PidController()
{
}

PidController::~PidController()
{
}

std::string PidController::MotorDriveControl()
{
	return "[PD Controller] : P = " + std::to_string(pParameter_) + ", I = " + std::to_string(iParameter_) + ", D = " + std::to_string(dParameter_);
}