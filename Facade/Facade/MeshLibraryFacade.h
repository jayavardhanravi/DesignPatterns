#pragma once

#include "ExternalLibrary/VoxelMesh.h"
#include "ExternalLibrary/CubeMesh.h"
#include <string>

class MeshLibraryFacade
{
public:
	MeshLibraryFacade();
	~MeshLibraryFacade();

	std::string CreateSmallTreeStructure();
	std::string CreateBigTreeStructure();

};

