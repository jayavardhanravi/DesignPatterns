#include "MeshBuilder.h"

MeshBuilder::MeshBuilder()
{
}

MeshBuilder::~MeshBuilder()
{
}

bool MeshBuilder::GenerateMesh(MESHTYPE type)
{
	switch (type)
	{
	case MESHTYPE::CYLINDER:
	{
		CylinderMeshFactory factory;
		std::cout << "Print the mesh generated : " << factory.GetMesh()->GetMesh() << std::endl;
		std::cout << "Print the mesh property : " << factory.GetProperty()->GetMeshProperty() << std::endl;
		return true;
	}
	case MESHTYPE::SPHERE:
	{
		SphereMeshFactory factory;
		std::cout << "Print the mesh generated : " << factory.GetMesh()->GetMesh() << std::endl;
		std::cout << "Print the mesh property : " << factory.GetProperty()->GetMeshProperty() << std::endl;
		return true;
	}
	default:
		return false;
	}
}
