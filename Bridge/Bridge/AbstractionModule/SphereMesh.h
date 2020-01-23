#pragma once

#include "Mesh.h"

class SphereMesh : public Mesh
{
public:
	SphereMesh(MeshProperty*);
	~SphereMesh();

	std::string GetProperty();
};
