#pragma once

#include "../builder/MeshBuilder.h"

class MeshBuildController
{
public:
	MeshBuildController();
	~MeshBuildController();

	void BuildMesh();
	void SetMesh(MeshBuilder *);
	Cylinder GetMesh();

private:
	MeshBuilder *builder = nullptr;
};

