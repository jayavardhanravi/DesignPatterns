#include "Mesh.h"

Mesh::Mesh()
{
}

Mesh::~Mesh()
{
}

std::string Mesh::DrawMesh(MESH meshType)
{
	switch (meshType)
	{
	case CYLINDER:
	{
		return key_ + " Cylinder Mesh is drawn...";
		break;
	}
	case SPHERE:
	{
		return key_ + " Sphere Mesh is drawn...";
		break;
	}
	case CONE:
	{
		return key_ + " Cone Mesh is drawn...";
		break;
	}
	case BOX:
	{
		return key_ + " Box Mesh is drawn...";
		break;
	}
	default:
	{
		return key_ + " No Mesh is drawn...";
		break;
	}
	}
}
