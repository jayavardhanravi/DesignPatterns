#pragma once
#include <string>

class MeshProperty
{
public:
	virtual ~MeshProperty() {};

	virtual std::string PrintPropertyInfo() = 0;
};