#include "MeshLibrary.h"
#include "Mesh.h"

class MeshLibrary::MeshImplementation
{
public:
	MeshImplementation();
	~MeshImplementation();

	std::string DrawMesh(MESH);

private:
	std::unique_ptr<Mesh> mesh_ = nullptr;
};

MeshLibrary::MeshImplementation::MeshImplementation() : mesh_(std::make_unique<Mesh>())
{
}

MeshLibrary::MeshImplementation::~MeshImplementation()
{

}

std::string MeshLibrary::MeshImplementation::DrawMesh(MESH meshType)
{
	return mesh_->DrawMesh(meshType);
}

MeshLibrary::MeshLibrary() : meshImplementation_(std::make_unique<MeshImplementation>())
{
}

MeshLibrary::~MeshLibrary()
{
}

std::string MeshLibrary::DrawMesh(MESH meshType)
{
	return meshImplementation_->DrawMesh(meshType);
}
