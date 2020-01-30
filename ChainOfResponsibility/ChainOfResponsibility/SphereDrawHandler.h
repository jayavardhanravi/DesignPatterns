#pragma once
#include "DrawHandler.h"
class SphereDrawHandler :	public DrawHandler
{
public:
	SphereDrawHandler();
	~SphereDrawHandler();

	std::string Draw(int vertices);
};

