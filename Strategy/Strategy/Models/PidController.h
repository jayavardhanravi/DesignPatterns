#pragma once
#include "Model.h"

class PidController : public Model
{
public:
	PidController();
	~PidController();

	std::string MotorDriveControl();

private:
	double pParameter_{ 1.0 };
	double iParameter_{ 1.0 };
	double dParameter_{ 1.0 };
};

