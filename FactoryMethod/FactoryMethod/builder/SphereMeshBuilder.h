#pragma once
#include "MeshBuilder.h"
#include "../common/Sphere.h"

class SphereMeshBuilder : public MeshBuilder
{
public:
	SphereMeshBuilder();
	~SphereMeshBuilder();

	std::unique_ptr<Mesh> CreateMesh();
};

