#include "Sphere.h"

Sphere::Sphere()
{
	InitializeModels();
}

Sphere::~Sphere()
{
}

void Sphere::InitializeModels()
{
	// Default Model
	std::unique_ptr<SphereModel> modelA = std::make_unique<SphereModel>();
	listOfModels["default"] = std::move(modelA);

	// Custom Model
	std::unique_ptr<SphereModel> modelB = std::make_unique<SphereModel>();
	modelB->RenderModel();
	listOfModels["custom"] = std::move(modelB);
}

void Sphere::AddDataPoint(double x, double y, double z)
{
	std::unique_ptr<SphereTransform> transform = std::make_unique<SphereTransform>();
	transform->AddModel(listOfModels["default"].get());
	transform->ApplyTransforms(x, y, z);
	std::string key = "D-"+std::to_string(x) + "-" + std::to_string(y) + "-" + std::to_string(z);
	listOfDatapoints[key] = std::move(transform);
}

void Sphere::AddCustomDataPoint(double x, double y, double z)
{
	std::unique_ptr <SphereTransform> transform = std::make_unique<SphereTransform>();
	transform->AddModel(listOfModels["custom"].get());
	transform->ApplyTransforms(x, y, z);
	std::string key = "C-" + std::to_string(x) + "-" + std::to_string(y) + "-" + std::to_string(z);
	listOfDatapoints[key] = std::move(transform);
}

void Sphere::PrintInfo()
{
	// Print List of Models
	for (std::unordered_map<std::string, std::unique_ptr<SphereModel>>::iterator i = listOfModels.begin(); i != listOfModels.end(); ++i)
	{
		std::cout << "MODELS : " << i->second->PrintInfo() << std::endl;
	}

	// Print List of Transforms
	for (std::unordered_map<std::string, std::unique_ptr<SphereTransform>>::iterator i = listOfDatapoints.begin(); i != listOfDatapoints.end(); ++i)
	{
		std::cout << "TRANSFORMS : " << i->second->PrintInfo() << std::endl;
	}
}


