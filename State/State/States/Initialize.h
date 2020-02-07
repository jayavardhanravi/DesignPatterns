#pragma once
#include "RobotState.h"
#include "Ready.h"

class Initialize : public RobotState
{
public:
	Initialize();
	~Initialize();

	bool InitRobot(Controller *);
	bool ReadyRobot(Controller *);

private:
	std::unique_ptr<Initialize> state_ = nullptr;
};

