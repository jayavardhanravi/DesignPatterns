#pragma once

#include "../common/CylinderMesh.h"
#include "../common/SphereMesh.h"
#include <map>

enum MESHTYPE
{
	CYLINDER,
	SPHERE,
	endOfTypes
};

class MeshController
{
public:
	MeshController();
	~MeshController();

	void Initialize();
	Mesh * GetPrototype(MESHTYPE);

private:
	std::map<MESHTYPE, Mesh*> prototypeCollection_;
};

