#pragma once
#include <string>
#include "Exportable.h"

class Mesh : public Exportable
{
public:
	virtual ~Mesh() {};

	virtual void ShareWith(Exporter *exporter) {exporter->Export(this);};
	virtual std::string PrintInfo() = 0;
};
