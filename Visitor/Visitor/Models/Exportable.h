#pragma once
#include "../Exporters/Exporter.h"

class Exportable
{
public:
	virtual ~Exportable() {};

	virtual void ShareWith(Exporter *) = 0;
};
