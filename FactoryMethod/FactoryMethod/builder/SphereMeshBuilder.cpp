#include "SphereMeshBuilder.h"

SphereMeshBuilder::SphereMeshBuilder()
{
}

SphereMeshBuilder::~SphereMeshBuilder()
{
}

std::unique_ptr<Mesh> SphereMeshBuilder::CreateMesh()
{
	auto meshObj = std::unique_ptr<Mesh>(new Sphere());
	return meshObj;
}
