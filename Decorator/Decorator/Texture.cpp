#include "Texture.h"

Texture::Texture(Mesh *mesh) : MeshDecorator(mesh)
{
}

Texture::~Texture()
{
}

void Texture::AddMeshProperties()
{
	MeshDecorator::AddMeshProperties();
	TextureFeatures();
}

void Texture::TextureFeatures()
{
	std::cout << "Added the Texture Features" << std::endl;
}
