#include "VoxelMesh.h"

VoxelMesh::VoxelMesh()
{
}

VoxelMesh::~VoxelMesh()
{
	for (auto i = 0; i < childCollection.size(); i++)
		RemoveChildMesh(i);
}

int VoxelMesh::GetVertices()
{
	int vertices = 0;
	for (auto i = 0; i < childCollection.size(); i++)
	{
		vertices += childCollection[i]->GetVertices();
	}
	return vertices;
}

void VoxelMesh::AddChildMesh(Mesh *childMesh)
{
	childCollection.push_back(childMesh);
}

Mesh* VoxelMesh::GetChildMesh(int id)
{
	return childCollection[id];
}

void VoxelMesh::RemoveChildMesh(int id)
{
	if (id < childCollection.size())
	{
		childCollection.erase(childCollection.begin() + id);
	}
}
