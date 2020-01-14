#pragma once

#include <memory>

#include "../common/Mesh.h"

class MeshBuilder
{
public:
	virtual ~MeshBuilder() {};
	virtual std::unique_ptr<Mesh> CreateMesh() = 0;
};