#include "StandardModel.h"

StandardModel::StandardModel()
{
}

StandardModel::~StandardModel()
{
}

double StandardModel::ComputePropotional()
{
	return 0.2;
}

double StandardModel::ComputeDifferential()
{
	return 0.5;
}

double StandardModel::ComputeIntegral()
{
	return 0.6;
}
