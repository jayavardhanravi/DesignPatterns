#include "ObjExporter.h"

ObjExporter::ObjExporter()
{
	info_ = "[OBJ Exporting] : ";
}

ObjExporter::~ObjExporter()
{
}

void ObjExporter::Export(Mesh *mesh)
{
	info_.append("\n" + mesh->PrintInfo());
}