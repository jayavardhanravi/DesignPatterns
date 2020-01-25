#pragma once
#include <iostream>

class Mesh
{
public:
	virtual ~Mesh() {};

	virtual void AddMeshProperties() = 0;
};