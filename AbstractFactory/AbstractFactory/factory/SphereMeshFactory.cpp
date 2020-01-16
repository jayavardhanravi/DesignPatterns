#include "SphereMeshFactory.h"

SphereMeshFactory::SphereMeshFactory()
{
}


SphereMeshFactory::~SphereMeshFactory()
{
}

std::unique_ptr<Mesh> SphereMeshFactory::GetMesh()
{
	auto mesh = std::make_unique<Sphere>();
	return mesh;
}

std::unique_ptr<MeshProperty> SphereMeshFactory::GetProperty()
{
	auto meshProperty = std::make_unique<SphereProperty>();
	return meshProperty;
}
