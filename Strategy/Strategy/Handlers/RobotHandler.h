#pragma once
#include "Handler.h"

class RobotHandler : public Handler
{
public:
	RobotHandler();
	~RobotHandler();

	std::string Run();
};

