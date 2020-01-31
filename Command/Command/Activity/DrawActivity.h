#pragma once
#include <memory>

#include "Activity.h"
#include "../Mesh.h"

class DrawActivity : public Activity
{
public:
	explicit DrawActivity(std::weak_ptr<Mesh>, int);
	~DrawActivity() override;

	void TakeAction() override;

private:
	std::weak_ptr<Mesh> mesh_;
	int vertices_;
};

