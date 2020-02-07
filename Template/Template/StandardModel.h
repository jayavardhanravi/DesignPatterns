#pragma once

#include "Model.h"

class StandardModel : public Model
{
public:
	StandardModel();
	~StandardModel();

	double ComputePropotional();
	double ComputeDifferential();
	double ComputeIntegral();
};

