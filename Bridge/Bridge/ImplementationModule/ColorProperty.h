#pragma once
#include "MeshProperty.h"

class ColorProperty : public MeshProperty
{
public:
	ColorProperty();
	~ColorProperty();

	std::string PrintPropertyInfo();
};

