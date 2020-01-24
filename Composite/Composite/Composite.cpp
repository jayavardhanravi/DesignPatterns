#include <iostream>

#include "VoxelMesh.h"
#include "CubeMesh.h"

int main()
{
	VoxelMesh root;
	root.AddChildMesh(new CubeMesh());
	VoxelMesh level1;
	root.AddChildMesh(&level1);
	level1.AddChildMesh(new CubeMesh());
	level1.AddChildMesh(new CubeMesh());
	level1.AddChildMesh(new CubeMesh());
	level1.AddChildMesh(new CubeMesh());
	level1.AddChildMesh(new CubeMesh());
	VoxelMesh level2;
	level1.AddChildMesh(&level2);
	level2.AddChildMesh(new CubeMesh());
	level2.AddChildMesh(new CubeMesh());
	level2.AddChildMesh(new CubeMesh());


	std::cout << "[ROOT] # of Vertices : " << root.GetVertices() << std::endl;
	std::cout << "[LEVEL 1] # of Vertices : " << level1.GetVertices() << std::endl;
	std::cout << "[LEVEL 2] # of Vertices : " << level2.GetVertices() << std::endl;

	root.AddChildMesh(new CubeMesh());
	std::cout << "[ROOT added with one CUBE] # of Vertices : " << root.GetVertices() << std::endl;

	Mesh *level1_voxelMesh = root.GetChildMesh(1);
	level1_voxelMesh->RemoveChildMesh(5);
	std::cout << "[ROOT with (0) removed] # of Vertices : " << root.GetVertices() << std::endl;
	std::cout << "[LEVEL 1 with (5) removed] # of Vertices : " << level1.GetVertices() << std::endl;

}
