#include "DrawMesh.h"

DrawMesh::DrawMesh()
{
}

DrawMesh::~DrawMesh()
{
}

void DrawMesh::ConfigureDrawHandlers()
{
	root = std::make_unique<DrawHandler>();
	root->AddNextHandler(new CylinderDrawHandler());
	root->AddNextHandler(new SphereDrawHandler());
	root->AddNextHandler(new ConeDrawHandler());
}

std::string DrawMesh::Draw(int vertices)
{
	if (!root)
		ConfigureDrawHandlers();
	return root->Draw(vertices);
}
