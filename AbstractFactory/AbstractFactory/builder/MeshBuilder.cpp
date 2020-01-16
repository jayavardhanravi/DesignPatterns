#include "MeshBuilder.h"

MeshBuilder::MeshBuilder()
{
}

MeshBuilder::~MeshBuilder()
{
}

bool MeshBuilder::GenerateMesh(MESHTYPE type)
{
	switch (type)
	{
	case MESHTYPE::CYLINDER:
	{
		CylinderMeshFactory factory;
		meshPtr = factory.GetMesh();
		meshPropertyPtr = factory.GetProperty();
		return true;
	}
	case MESHTYPE::SPHERE:
	{
		SphereMeshFactory factory;
		meshPtr = factory.GetMesh();
		meshPropertyPtr = factory.GetProperty();
		return true;
	}
	default:
		return false;
	}
}
