#pragma once
#include "Exporter.h"
#include "../Models/Cylinder.h"
#include "../Models/Sphere.h"

class ObjExporter : public Exporter
{
public:
	ObjExporter();
	~ObjExporter();

	void Export(Mesh *);
};

