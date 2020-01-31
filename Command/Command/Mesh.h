#pragma once
#include <string>
#include <iostream>

class Mesh
{
public:
	Mesh();
	~Mesh();

	std::string Draw(int);
	bool Erase();
	std::string Save();

private:
	std::string key_ = "[MESH]";
	bool drawStatus_ = false;
};

