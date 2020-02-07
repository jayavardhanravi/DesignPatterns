#pragma once
#include "RobotState.h"
#include "Stopped.h"

class Running : public RobotState
{
public:
	Running();
	~Running();

	bool RunningRobot(Controller *);
	bool StoppedRobot(Controller *);
private:
	std::unique_ptr<Running> state_ = nullptr;
};

