#pragma once
#include "Mesh.h"

#include <vector>

class VoxelMesh : public Mesh
{
public:
	VoxelMesh();
	~VoxelMesh();

	int GetVertices();

	void AddChildMesh(Mesh *);
	Mesh* GetChildMesh(int);
	void RemoveChildMesh(int);

private:
	std::vector<Mesh *> childCollection;
};

