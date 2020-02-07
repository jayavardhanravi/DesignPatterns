#pragma once
#include "RobotState.h"
#include "Ready.h"
#include "Shutdown.h"

class Stopped : public RobotState
{
public:
	Stopped();
	~Stopped();

	bool StoppedRobot(Controller *);
	bool ShutdownRobot(Controller *);
	bool ReadyRobot(Controller *);
private:
	std::unique_ptr<Stopped> state_ = nullptr;
};

