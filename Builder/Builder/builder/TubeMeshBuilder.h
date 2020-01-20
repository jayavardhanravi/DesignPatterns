#pragma once

#include "MeshBuilder.h"

class TubeMeshBuilder :	public MeshBuilder
{
public:
	TubeMeshBuilder();
	~TubeMeshBuilder();

	void buildColor();
	void buildCap();
	void buildDimensions();
};

