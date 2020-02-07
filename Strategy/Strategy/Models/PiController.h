#pragma once
#include "Model.h"

class PiController : public Model
{
public:
	PiController();
	~PiController();

	std::string MotorDriveControl();

private:
	double pParameter_{ 0.8 };
	double iParameter_{ 1.0 };
};

