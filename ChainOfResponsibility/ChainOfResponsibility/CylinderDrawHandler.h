#pragma once
#include "DrawHandler.h"
class CylinderDrawHandler :	public DrawHandler
{
public:
	CylinderDrawHandler();
	~CylinderDrawHandler();

	std::string Draw(int vertices);
};

