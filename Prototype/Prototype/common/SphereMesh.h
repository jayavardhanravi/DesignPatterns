#pragma once
#include "Mesh.h"

class SphereMesh : public Mesh
{
public:
	SphereMesh();
	~SphereMesh();

	Mesh* Clone();
	std::string PrintMeshType();
	std::string GetColor();

	void SetColor(const std::string&);

private:
	std::string color_ = "#000000";
};

