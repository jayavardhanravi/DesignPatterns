#include "CylinderMeshBuilder.h"

CylinderMeshBuilder::CylinderMeshBuilder()
{
}

CylinderMeshBuilder::~CylinderMeshBuilder()
{
}

std::unique_ptr<Mesh> CylinderMeshBuilder::CreateMesh()
{
	auto meshObject = std::unique_ptr<Mesh>(new Cylinder());
	return meshObject;
}
