#include "ConeDrawHandler.h"

ConeDrawHandler::ConeDrawHandler()
{
}

ConeDrawHandler::~ConeDrawHandler()
{
}

std::string ConeDrawHandler::Draw(int vertices)
{
	if (vertices == 5)
		return " [CONE can be drawn] ";
	else
		return " [NO CONE] "+DrawHandler::Draw(vertices);
}
