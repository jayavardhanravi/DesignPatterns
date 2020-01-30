#include "CylinderDrawHandler.h"

CylinderDrawHandler::CylinderDrawHandler()
{
}

CylinderDrawHandler::~CylinderDrawHandler()
{
}

std::string CylinderDrawHandler::Draw(int vertices)
{
	if (vertices == 4)
		return " [CYLINDER can be drawn] ";
	else
		return " [NO CYLINDER] "+DrawHandler::Draw(vertices);
}
