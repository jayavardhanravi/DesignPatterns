#include "SaveActivity.h"

SaveActivity::SaveActivity(std::weak_ptr<Mesh> mesh) : mesh_(mesh)
{
}

SaveActivity::~SaveActivity()
{
}

void SaveActivity::TakeAction()
{
	mesh_.lock()->Save();
}
