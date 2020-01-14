#pragma once
#include "MeshBuilder.h"
#include "../common/Cylinder.h"
class CylinderMeshBuilder :	public MeshBuilder
{
public:
	CylinderMeshBuilder();
	~CylinderMeshBuilder();

	std::unique_ptr<Mesh> CreateMesh();
};

