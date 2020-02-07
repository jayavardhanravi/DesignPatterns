#pragma once
#include "Commons.h"

class RobotState;
class Controller
{
public:
	virtual ~Controller() {};

	virtual void SetCurrentState(std::unique_ptr<RobotState>) {};
	virtual bool SendCommand(Command) { return false; };
};