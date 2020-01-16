#pragma once

class MeshProperty
{
public:
	virtual ~MeshProperty() {};
	virtual double GetMeshProperty() = 0;
};