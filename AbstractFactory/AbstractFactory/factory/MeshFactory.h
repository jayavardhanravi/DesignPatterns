#pragma once

#include <string>
#include <memory>

#include "../common/Mesh.h"
#include "../common/MeshProperty.h"

class MeshFactory
{
public:
	virtual ~MeshFactory() {};
	virtual std::unique_ptr<Mesh> GetMesh() = 0;
	virtual std::unique_ptr<MeshProperty> GetProperty() = 0;
};
