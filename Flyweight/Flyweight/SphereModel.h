#pragma once
#include <string>

class Mesh
{
public:
	Mesh() {};
	~Mesh() {};
	int vertices = 0;
	std::string mesh = "Sphere";
};

class Texture
{
public:
	Texture() {};
	~Texture() {};
	std::string bitmap = "Texture";
};

class SphereModel
{
public:
	SphereModel();
	~SphereModel();

	void RenderModel();
	std::string PrintInfo();

private:
	Mesh model;
	Texture texture;
};

