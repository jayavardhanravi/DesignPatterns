#pragma once
#include "Mesh.h"

class CylinderMesh : public Mesh
{
public:
	CylinderMesh();
	~CylinderMesh();

	Mesh* Clone();
	std::string PrintMeshType();
	std::string GetColor();

	void SetColor(const std::string&);

private:
	std::string color_ = "#ffffff";
};

