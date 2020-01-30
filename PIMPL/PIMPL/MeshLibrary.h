#pragma once
#include <string>
#include <memory>

#include "Commons.h"

class Mesh;
class MeshLibrary
{
public:
	MeshLibrary();
	~MeshLibrary();

	std::string DrawMesh(MESH);

private:
	class MeshImplementation;
	std::unique_ptr<MeshImplementation> meshImplementation_;
};

