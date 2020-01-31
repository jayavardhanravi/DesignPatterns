#include "EraseActivity.h"

EraseActivity::EraseActivity(std::weak_ptr<Mesh> mesh) : mesh_(mesh)
{
}

EraseActivity::~EraseActivity()
{
}

void EraseActivity::TakeAction()
{
	mesh_.lock()->Erase();
}
