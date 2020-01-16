#pragma once

#include <iostream>

#include "../factory/SphereMeshFactory.h"
#include "../factory/CylinderMeshFactory.h"

enum class MESHTYPE
{
	CYLINDER,
	SPHERE
};

class MeshBuilder
{
public:
	MeshBuilder();
	~MeshBuilder();

	bool GenerateMesh(MESHTYPE);
};

