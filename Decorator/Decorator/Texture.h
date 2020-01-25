#pragma once
#include "MeshDecorator.h"
class Texture :	public MeshDecorator
{
public:
	Texture(Mesh *);
	~Texture();

	void AddMeshProperties();

	void TextureFeatures();
};

