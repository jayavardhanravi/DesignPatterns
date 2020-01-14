#include <iostream>

#include "builder/CylinderMeshBuilder.h"
#include "builder/SphereMeshBuilder.h"
#include "builder/BoxMeshBuilder.h"
#include "builder/ConeMeshBuilder.h"

enum class MESHTYPE
{
	CYLINDER,
	SPHERE,
	BOX,
	CONE
};

class TestApplication
{
public:
	TestApplication();
	~TestApplication();

	std::unique_ptr<Mesh> BuildMesh(MESHTYPE);
};

TestApplication::TestApplication()
{

}

TestApplication::~TestApplication()
{

}

std::unique_ptr<Mesh> TestApplication::BuildMesh(MESHTYPE type)
{
	switch (type)
	{
	case MESHTYPE::CYLINDER:
	{
		CylinderMeshBuilder meshBuilder;
		auto meshObj = meshBuilder.CreateMesh();
		return meshObj;
	}
	case MESHTYPE::SPHERE:
	{
		SphereMeshBuilder meshBuilder;
		auto meshObj = meshBuilder.CreateMesh();
		return meshObj;
	}
	case MESHTYPE::BOX:
	{
		BoxMeshBuilder meshBuilder;
		auto meshObj = meshBuilder.CreateMesh();
		return meshObj;
	}
	case MESHTYPE::CONE:
	{
		ConeMeshBuilder meshBuilder;
		auto meshObj = meshBuilder.CreateMesh();
		return meshObj;
	}
	default:
		return nullptr;
	}
}

int main()
{
	TestApplication testApplication;
	std::cout << "Cylinder Mesh -> " << testApplication.BuildMesh(MESHTYPE::CYLINDER)->getName() << std::endl;
	std::cout << "Sphere Mesh -> " << testApplication.BuildMesh(MESHTYPE::SPHERE)->getName() << std::endl;
	std::cout << "Box Mesh -> " << testApplication.BuildMesh(MESHTYPE::BOX)->getName() << std::endl;
	std::cout << "Cone Mesh -> " << testApplication.BuildMesh(MESHTYPE::CONE)->getName() << std::endl;
}
