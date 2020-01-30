#pragma once
#include "CylinderDrawHandler.h"
#include "SphereDrawHandler.h"
#include "ConeDrawHandler.h"

class DrawMesh
{
public:
	DrawMesh();
	~DrawMesh();

	void ConfigureDrawHandlers();

	std::string Draw(int vertices);
private:
	std::unique_ptr<DrawHandler> root = nullptr;
};

