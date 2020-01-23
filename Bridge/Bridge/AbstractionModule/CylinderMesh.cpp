#include "CylinderMesh.h"

CylinderMesh::CylinderMesh(MeshProperty* property)
{
	property_ = property;
}

CylinderMesh::~CylinderMesh()
{

}

std::string CylinderMesh::GetProperty()
{
	return property_->PrintPropertyInfo();
}