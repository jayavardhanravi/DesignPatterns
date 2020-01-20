#include "MeshController.h"



MeshController::MeshController()
{
}


MeshController::~MeshController()
{
}

void MeshController::Initialize()
{
	for (int i = MESHTYPE::CYLINDER; i != MESHTYPE::endOfTypes; i++)
	{
		Mesh *mesh = nullptr;
		switch (static_cast<MESHTYPE>(i))
		{
			case MESHTYPE::CYLINDER:
			{
				mesh = new CylinderMesh();
				break;
			}
			case MESHTYPE::SPHERE:
			{
				mesh = new SphereMesh();
				break;
			}
			default:
			{
				mesh = nullptr;
				break;
			}
		}
		std::pair<MESHTYPE, Mesh *> item(static_cast<MESHTYPE>(i), mesh);
		prototypeCollection_.insert(item);
	}
}

Mesh * MeshController::GetPrototype(MESHTYPE type)
{
	switch (type)
	{
	case CYLINDER:
	{
		return prototypeCollection_[CYLINDER]->Clone();
	}
	case SPHERE:
	{
		return prototypeCollection_[SPHERE]->Clone();
	}
	case endOfTypes:
	{
		return nullptr;
	}
	default:
	{
		return nullptr;
	}
	}
}
