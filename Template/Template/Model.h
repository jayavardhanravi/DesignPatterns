#pragma once
#include <string>

class Model
{
public:
	virtual ~Model() {};

	virtual std::string RunController()
	{
		double computedPID = ComputePropotional()*ComputeDifferential()*ComputeIntegral();
		return "[COMPUTED] : " + std::to_string(computedPID);
	};

	virtual double ComputePropotional() = 0;
	virtual double ComputeDifferential() = 0;
	virtual double ComputeIntegral() = 0;
};
