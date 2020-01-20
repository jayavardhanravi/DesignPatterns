#include "TubeMeshBuilder.h"

TubeMeshBuilder::TubeMeshBuilder()
{
}


TubeMeshBuilder::~TubeMeshBuilder()
{
}

void TubeMeshBuilder::buildCap()
{
	cylinder.SetTopCap(false);
	cylinder.SetBottomCap(true);
}

void TubeMeshBuilder::buildColor()
{
	cylinder.SetColor("#00ff00");
}

void TubeMeshBuilder::buildDimensions()
{
	cylinder.SetHeight(10000);
	cylinder.SetRadius(10);
}
