#include "SphereMesh.h"

SphereMesh::SphereMesh()
{
}

SphereMesh::~SphereMesh()
{
}

std::string SphereMesh::GetColor()
{
	return color_;
}

void SphereMesh::SetColor(const std::string& color)
{
	color_ = color;
}

Mesh* SphereMesh::Clone()
{
	return new SphereMesh();
}

std::string SphereMesh::PrintMeshType()
{
	return "Sphere";
}
