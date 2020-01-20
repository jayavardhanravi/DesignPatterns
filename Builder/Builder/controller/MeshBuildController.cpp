#include "MeshBuildController.h"

MeshBuildController::MeshBuildController()
{
}

MeshBuildController::~MeshBuildController()
{
	if (builder)
		delete builder;
}

void MeshBuildController::BuildMesh()
{
	builder->buildCap();
	builder->buildColor();
	builder->buildDimensions();
}

void MeshBuildController::SetMesh(MeshBuilder *builderValue)
{
	if (builder)
		delete builder;
	builder = builderValue;
}

Cylinder MeshBuildController::GetMesh()
{
	return builder->GetMesh();
}
