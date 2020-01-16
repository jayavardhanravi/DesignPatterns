#pragma once

#include "MeshFactory.h"
#include "../common/Cylinder.h"
#include "../common/CylinderProperty.h"

class CylinderMeshFactory :	public MeshFactory
{
public:
	CylinderMeshFactory();
	~CylinderMeshFactory();

	std::unique_ptr<Mesh> GetMesh();
	std::unique_ptr<MeshProperty> GetProperty();
};	

