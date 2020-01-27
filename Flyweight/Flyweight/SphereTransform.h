#pragma once
#include "SphereModel.h"

class SphereTransform
{
public:
	SphereTransform();
	~SphereTransform();

	void ApplyTransforms(double, double, double);
	void AddModel(SphereModel*);

	std::string PrintInfo();

private:
	double posX = 0;
	double posY = 0;
	double posZ = 0;

	SphereModel *modelParameters = nullptr;
};

