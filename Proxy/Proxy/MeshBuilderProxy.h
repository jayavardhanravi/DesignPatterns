#pragma once
#include "MeshBuilder.h"

class MeshBuilderProxy : public Mesh
{
public:
	MeshBuilderProxy();
	~MeshBuilderProxy();

	std::string CreateMesh(int vertices);

private:
	std::unique_ptr<MeshBuilder> actualBuilder = nullptr;
	bool MeshPosibility(int vertices);
};

