#pragma once

#include "Model.h"

class CustomModel : public Model
{
public:
	CustomModel();
	~CustomModel();

	double ComputePropotional();
	double ComputeDifferential();
	double ComputeIntegral();
};

