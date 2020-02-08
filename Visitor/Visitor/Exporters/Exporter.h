#pragma once
#include <string>

class Mesh;
class Exporter
{
public:
	virtual ~Exporter() {};

	virtual void Export(Mesh *) = 0;
	virtual std::string PrintExportReport() 
	{
		return info_;
	};

protected:
	std::string info_;
};
