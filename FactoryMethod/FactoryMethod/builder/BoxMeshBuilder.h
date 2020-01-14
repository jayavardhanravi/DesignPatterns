#pragma once
#include "MeshBuilder.h"
#include "../common/Box.h"

class BoxMeshBuilder : public MeshBuilder
{
public:
	BoxMeshBuilder();
	~BoxMeshBuilder();
	std::unique_ptr<Mesh> CreateMesh();
};

