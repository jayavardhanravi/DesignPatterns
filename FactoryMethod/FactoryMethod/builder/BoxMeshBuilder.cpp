#include "BoxMeshBuilder.h"

BoxMeshBuilder::BoxMeshBuilder()
{
}

BoxMeshBuilder::~BoxMeshBuilder()
{
}

std::unique_ptr<Mesh> BoxMeshBuilder::CreateMesh()
{
	auto meshObj = std::unique_ptr<Mesh>(new Box());
	return meshObj;
}
