#pragma once
#include "Model.h"

class PdController : public Model
{
public:
	PdController();
	~PdController();

	std::string MotorDriveControl();

private:
	double pParameter_{0.2};
	double dParameter_{1.0};
};

