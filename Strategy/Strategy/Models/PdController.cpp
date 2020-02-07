#include "PdController.h"

PdController::PdController()
{
}

PdController::~PdController()
{
}

std::string PdController::MotorDriveControl()
{
	return "[PD Controller] : P = " + std::to_string(pParameter_) + ", D = " + std::to_string(dParameter_);
}
