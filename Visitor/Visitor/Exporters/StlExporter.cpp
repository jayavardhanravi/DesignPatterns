#include "StlExporter.h"

StlExporter::StlExporter()
{
	info_ = "[STL Exporting] : ";
}

StlExporter::~StlExporter()
{
}

void StlExporter::Export(Mesh *mesh)
{
	info_.append("\n" + mesh->PrintInfo());
}
