#include "Mesh.h"

Mesh::Mesh()
{
}

Mesh::~Mesh()
{
}

std::string Mesh::Draw(int vertices)
{
	if (vertices > 5)
	{
		drawStatus_ = true;
		std::cout << "Mesh drawn on display" << std::endl;
		return "Mesh drawn on display";
	}
	else
	{
		drawStatus_ = false;
		std::cout << "Unable to draw the mesh..." << std::endl;
		return "Unable to draw the mesh...";
	}
}

bool Mesh::Erase()
{
	std::cout << "Erase Status : "<< drawStatus_ << std::endl;
	return drawStatus_;
}

std::string Mesh::Save()
{
	if (drawStatus_)
	{
		std::cout << "Saved the drawing :)" << std::endl;
		return key_ + "Saved the drawing :)";
	}
	else
	{
		std::cout << "Nothing to save..." << std::endl;
		return key_ + "Nothing to save...";
	}
}
