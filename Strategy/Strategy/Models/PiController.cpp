#include "PiController.h"

PiController::PiController()
{
}

PiController::~PiController()
{
}

std::string PiController::MotorDriveControl()
{
	return "[PI Controller] : P = " + std::to_string(pParameter_) + ", I = " + std::to_string(iParameter_);
}