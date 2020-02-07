#pragma once
#include <iostream>
#include "../Controller/Controller.h"

class RobotState
{
public:
	virtual ~RobotState() {};

	virtual bool InitRobot(Controller *) { return false; };
	virtual bool ReadyRobot(Controller *) { return false; };
	virtual bool RunningRobot(Controller *) { return false; };
	virtual bool StoppedRobot(Controller *) { return false; };
	virtual bool ShutdownRobot(Controller *) { return false; };
};
