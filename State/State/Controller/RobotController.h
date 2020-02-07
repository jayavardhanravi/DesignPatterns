#pragma once
#include <memory>
#include "Controller.h"
#include "../States/RobotState.h"

class RobotController : public Controller
{
public:
	RobotController(std::unique_ptr<RobotState>);
	~RobotController();

	void SetCurrentState(std::unique_ptr<RobotState>);
	bool SendCommand(Command);

private:
	std::unique_ptr<RobotState> currentState_ = nullptr;
	
};

