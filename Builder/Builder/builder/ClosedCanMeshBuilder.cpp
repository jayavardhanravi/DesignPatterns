#include "ClosedCanMeshBuilder.h"

ClosedCanMeshBuilder::ClosedCanMeshBuilder()
{
}


ClosedCanMeshBuilder::~ClosedCanMeshBuilder()
{
}

void ClosedCanMeshBuilder::buildCap()
{
	cylinder.SetTopCap(true);
	cylinder.SetBottomCap(true);
}

void ClosedCanMeshBuilder::buildColor()
{
	cylinder.SetColor("#ff00ff");
}

void ClosedCanMeshBuilder::buildDimensions()
{
	cylinder.SetHeight(50);
	cylinder.SetRadius(30);
}
