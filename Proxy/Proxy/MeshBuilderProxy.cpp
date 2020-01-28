#include "MeshBuilderProxy.h"

MeshBuilderProxy::MeshBuilderProxy()
{
	actualBuilder = std::make_unique<MeshBuilder>();
}

MeshBuilderProxy::~MeshBuilderProxy()
{
}

std::string MeshBuilderProxy::CreateMesh(int vertices)
{
	if (MeshPosibility(vertices))
		return actualBuilder->CreateMesh(vertices);
	return "[Failed] Insufficient vertices...";
}

bool MeshBuilderProxy::MeshPosibility(int vertices)
{
	return (vertices >= 3) ? true : false;
}
