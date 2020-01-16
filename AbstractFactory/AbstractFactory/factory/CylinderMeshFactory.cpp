#include "CylinderMeshFactory.h"

CylinderMeshFactory::CylinderMeshFactory()
{
}


CylinderMeshFactory::~CylinderMeshFactory()
{
}

std::unique_ptr<Mesh> CylinderMeshFactory::GetMesh()
{
	auto mesh = std::make_unique<Cylinder>();
	return mesh;
}

std::unique_ptr<MeshProperty> CylinderMeshFactory::GetProperty()
{
	auto meshProperty = std::make_unique<CylinderProperty>();
	return meshProperty;
}
