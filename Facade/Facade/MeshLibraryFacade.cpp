#include "MeshLibraryFacade.h"

MeshLibraryFacade::MeshLibraryFacade()
{
}

MeshLibraryFacade::~MeshLibraryFacade()
{
}

std::string MeshLibraryFacade::CreateSmallTreeStructure()
{
	VoxelMesh root;
	root.AddChildMesh(new CubeMesh());
	VoxelMesh level1;
	root.AddChildMesh(&level1);
	level1.AddChildMesh(new CubeMesh());
	level1.AddChildMesh(new CubeMesh());
	VoxelMesh level2;
	level1.AddChildMesh(&level2);
	level2.AddChildMesh(new CubeMesh());

	std::string data = "[Small Tree] : #Vertices = ";
	data.append(std::to_string(root.GetVertices()));
	return data;
}

std::string MeshLibraryFacade::CreateBigTreeStructure()
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

	std::string data = "[Big Tree] : #Vertices = ";
	data.append(std::to_string(root.GetVertices()));
	return data;
}
