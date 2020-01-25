#include "Color.h"

Color::Color(Mesh *mesh): MeshDecorator(mesh)
{
}

Color::~Color()
{
}

void Color::AddMeshProperties()
{
	MeshDecorator::AddMeshProperties();
	ColorFeatures();
}

void Color::ColorFeatures()
{
	std::cout << "Added the Color Features" << std::endl;
}