#include "SphereModel.h"

SphereModel::SphereModel()
{
	model.vertices = 1;
	model.mesh = "[Default Mesh]";
	texture.bitmap = "[Default Texture]";
}

SphereModel::~SphereModel()
{
}

void SphereModel::RenderModel()
{
	model.vertices = 10;
	model.mesh = "[Custom Mesh]";
	texture.bitmap = "[Custom Texture]";
}

std::string SphereModel::PrintInfo()
{
	return model.mesh +"[Vertices : "+ std::to_string(model.vertices) + "]" + texture.bitmap;
}
