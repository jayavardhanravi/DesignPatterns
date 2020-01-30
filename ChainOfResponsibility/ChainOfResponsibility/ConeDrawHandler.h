#pragma once
#include "DrawHandler.h"
class ConeDrawHandler :	public DrawHandler
{
public:
	ConeDrawHandler();
	~ConeDrawHandler();

	std::string Draw(int vertices);
};

