#pragma once
#include <string>
#include <memory>

#include "../ImplementationModule/MeshProperty.h"

class Mesh
{
public:
	virtual ~Mesh() 
	{
		if (!property_)
			delete property_;
	};

	virtual std::string GetProperty() = 0;

protected:
	MeshProperty *property_ = nullptr;
};
