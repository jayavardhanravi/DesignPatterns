#pragma once
#include <unordered_map>
#include <iostream>

#include "SphereTransform.h"

class Sphere
{
public:
	Sphere();
	~Sphere();

	void AddDataPoint(double, double, double);
	void AddCustomDataPoint(double, double, double);

	void PrintInfo();

private:
	std::unordered_map<std::string, std::unique_ptr<SphereModel>> listOfModels;
	std::unordered_map<std::string, std::unique_ptr<SphereTransform>> listOfDatapoints;
	void InitializeModels();

};

