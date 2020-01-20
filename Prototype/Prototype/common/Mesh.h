#pragma once

#include <string>

class Mesh
{
public:
	virtual Mesh* Clone() = 0;
	virtual std::string PrintMeshType() = 0;
	virtual std::string GetColor() = 0;
};
