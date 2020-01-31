#include "DrawActivity.h"

DrawActivity::DrawActivity(std::weak_ptr<Mesh> mesh, int vertices) : mesh_(mesh), vertices_(vertices)
{
}

DrawActivity::~DrawActivity()
{
}

void DrawActivity::TakeAction()
{
	mesh_.lock()->Draw(vertices_);
}
