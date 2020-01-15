#include "MeshBuilder.h"

MeshBuilder::MeshBuilder()
{
}

MeshBuilder::~MeshBuilder()
{
}

/*!
* @file MeshBuilder.cpp
* @brief Build Mesh Objects based on the MESHTYPE provided
* @details
* Different mesh objects are created based on the different mesh types provided
* @see MESHTYPE
* @param[in] type Type of mesh To generate
* @return Return the Unique pointer of the Mesh Object
*/
std::unique_ptr<Mesh> MeshBuilder::CreateMesh(MESHTYPE type)
{
	switch (type)
	{
	case MESHTYPE::CYLINDER:
	{
		auto meshObj = std::make_unique<Cylinder>();
		return meshObj;
	}
	case MESHTYPE::SPHERE:
	{
		auto meshObj = std::make_unique<Sphere>();
		return meshObj;
	}
	case MESHTYPE::BOX:
	{
		auto meshObj = std::make_unique<Box>();
		return meshObj;
	}
	case MESHTYPE::CONE:
	{
		auto meshObj = std::make_unique<Cone>();
		return meshObj;
	}
	default:
		return nullptr;
	}
}
