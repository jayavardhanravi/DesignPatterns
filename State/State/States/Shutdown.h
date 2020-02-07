#pragma once
#include "RobotState.h"
#include "Initialize.h"

class Shutdown : public RobotState
{
public:
	Shutdown();
	~Shutdown();

	bool ShutdownRobot(Controller *);
	bool InitRobot(Controller *);
private:
	std::unique_ptr<Shutdown> state_ = nullptr;
};

