#pragma once

#include "Mesh.h"

class MeshDecorator : public Mesh
{
public: 
	MeshDecorator(Mesh *mesh) : mesh_(mesh)
	{

	}

	~MeshDecorator() {};

	virtual void AddMeshProperties()
	{
		mesh_->AddMeshProperties();
	};

private:
	Mesh *mesh_ = nullptr;
};
