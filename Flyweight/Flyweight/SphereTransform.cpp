#include "SphereTransform.h"

SphereTransform::SphereTransform()
{
}

SphereTransform::~SphereTransform()
{
}

void SphereTransform::ApplyTransforms(double x, double y, double z)
{
	posX = x;
	posY = y;
	posZ = z;
}

void SphereTransform::AddModel(SphereModel* model)
{
	modelParameters = model;
}

std::string SphereTransform::PrintInfo()
{
	return "Position(" + std::to_string(posX) + ", " + std::to_string(posY) + ", " + std::to_string(posZ) + ") " + modelParameters->PrintInfo();
}