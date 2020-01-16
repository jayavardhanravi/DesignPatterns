#pragma once

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

	std::unique_ptr<Mesh> meshPtr;
	std::unique_ptr<MeshProperty> meshPropertyPtr;
};

