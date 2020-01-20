#pragma once

#include "../common/Cylinder.h"

class MeshBuilder
{
public:
	virtual ~MeshBuilder() {};

	Cylinder GetMesh()
	{
		return cylinder;
	};

	virtual void buildColor() = 0;
	virtual void buildCap() = 0;
	virtual void buildDimensions() = 0;

protected:
	Cylinder cylinder;
};