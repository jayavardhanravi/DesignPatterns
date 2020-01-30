#include "SphereDrawHandler.h"

SphereDrawHandler::SphereDrawHandler()
{
}

SphereDrawHandler::~SphereDrawHandler()
{
}

std::string SphereDrawHandler::Draw(int vertices)
{
	if (vertices == 6)
		return " [SPHERE can be drawn] ";
	else
		return " [NO SPHERE] " + DrawHandler::Draw(vertices);
}
