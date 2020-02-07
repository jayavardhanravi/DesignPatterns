#pragma once
#include "RobotState.h"
#include "Stopped.h"
#include "Running.h"

class Ready : public RobotState
{
public:
	Ready();
	~Ready();

	bool ReadyRobot(Controller *);
	bool RunningRobot(Controller *);
	bool StoppedRobot(Controller *);
private:
	std::unique_ptr<Ready> state_ = nullptr;
};