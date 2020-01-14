#pragma once

#include <string>

// Mesh interface
class Mesh
{
public:
	virtual ~Mesh() {};
	virtual std::string getName() = 0;
};