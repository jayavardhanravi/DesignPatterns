#pragma once
#include "MeshProperty.h"
class TextureProperty :	public MeshProperty
{
public:
	TextureProperty();
	~TextureProperty();

	std::string PrintPropertyInfo();
};

