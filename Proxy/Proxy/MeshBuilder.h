#pragma once
#include "Mesh.h"

class MeshBuilder :	public Mesh
{
public:
	MeshBuilder();
	~MeshBuilder();

	std::string CreateMesh(int vertices);
};

