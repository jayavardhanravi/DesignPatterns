#pragma once
#include "Exporter.h"
#include "../Models/Cylinder.h"
#include "../Models/Sphere.h"

class StlExporter : public Exporter
{
public:
	StlExporter();
	~StlExporter();

	void Export(Mesh *);
};

