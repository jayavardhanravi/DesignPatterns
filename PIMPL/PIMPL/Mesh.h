#pragma once
#include <string>

#include "Commons.h"

class Mesh
{
public:
	Mesh();
	~Mesh();

	std::string DrawMesh(MESH);

private:
	std::string key_ = "[KEY]";

};

