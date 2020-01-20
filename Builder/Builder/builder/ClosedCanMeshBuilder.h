#pragma once

#include "MeshBuilder.h"

class ClosedCanMeshBuilder :	public MeshBuilder
{
public:
	ClosedCanMeshBuilder();
	~ClosedCanMeshBuilder();

	void buildColor();
	void buildCap();
	void buildDimensions();
};

