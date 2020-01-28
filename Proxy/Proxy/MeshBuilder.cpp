#include "MeshBuilder.h"

MeshBuilder::MeshBuilder()
{
}

MeshBuilder::~MeshBuilder()
{
}

std::string MeshBuilder::CreateMesh(int vertices)
{
	return "[Mesh-" + std::to_string(vertices) + "]";
}