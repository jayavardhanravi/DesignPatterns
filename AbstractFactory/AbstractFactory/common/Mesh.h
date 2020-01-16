#pragma once

#include <string>

class Mesh
{
public:
	virtual ~Mesh() {};
	virtual std::string GetMesh() = 0;
};
