#pragma once
#include "MeshBuilder.h"
#include "../common/Cone.h"

class ConeMeshBuilder :	public MeshBuilder
{
public:
	ConeMeshBuilder();
	~ConeMeshBuilder();
	std::unique_ptr<Mesh> CreateMesh();
};

