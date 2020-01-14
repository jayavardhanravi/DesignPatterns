#include "ConeMeshBuilder.h"

ConeMeshBuilder::ConeMeshBuilder()
{
}

ConeMeshBuilder::~ConeMeshBuilder()
{
}

std::unique_ptr<Mesh> ConeMeshBuilder::CreateMesh()
{
	auto meshObj = std::unique_ptr<Mesh>(new Cone());
	return meshObj;
}


