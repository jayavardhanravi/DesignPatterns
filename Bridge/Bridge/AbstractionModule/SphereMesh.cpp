#include "SphereMesh.h"

SphereMesh::SphereMesh(MeshProperty* property)
{
	property_ = property;
}

SphereMesh::~SphereMesh()
{

}

std::string SphereMesh::GetProperty()
{
	return property_->PrintPropertyInfo();
}