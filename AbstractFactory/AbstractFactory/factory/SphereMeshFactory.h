#pragma once

#include "MeshFactory.h"
#include "../common/Sphere.h"
#include "../common/SphereProperty.h"

class SphereMeshFactory :	public MeshFactory
{
public:
	SphereMeshFactory();
	~SphereMeshFactory();

	std::unique_ptr<Mesh> GetMesh();
	std::unique_ptr<MeshProperty> GetProperty();
};	

