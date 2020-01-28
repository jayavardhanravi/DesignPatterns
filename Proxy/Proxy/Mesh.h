#pragma once
#include <string>
#include <memory>

class Mesh
{
public:
	virtual ~Mesh() {};

	virtual std::string CreateMesh(int vertices) = 0;
};
