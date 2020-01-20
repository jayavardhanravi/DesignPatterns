#include "CylinderMesh.h"

CylinderMesh::CylinderMesh()
{
}

CylinderMesh::~CylinderMesh()
{
}

std::string CylinderMesh::GetColor()
{
	return color_;
}

void CylinderMesh::SetColor(const std::string& color)
{
	color_ = color;
}

Mesh* CylinderMesh::Clone()
{
	return new CylinderMesh();
}

std::string CylinderMesh::PrintMeshType()
{
	return "Cylinder";
}
