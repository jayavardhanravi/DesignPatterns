#pragma once

#include "Mesh.h"

class CylinderMesh : public Mesh
{
public:
	CylinderMesh(MeshProperty*);
	~CylinderMesh();

	std::string GetProperty();
};
