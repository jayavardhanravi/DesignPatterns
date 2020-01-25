#pragma once
#include "MeshDecorator.h"
class Color : public MeshDecorator
{
public:
	Color(Mesh*);
	~Color();

	void AddMeshProperties();

	void ColorFeatures();
};

