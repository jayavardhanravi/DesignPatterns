#pragma once
#include <string>

enum ControlModels
{
	PID = 0x101,
	PI,
	PD
};

class Model
{
public:
	virtual ~Model() {};

	virtual std::string MotorDriveControl() = 0;
};
