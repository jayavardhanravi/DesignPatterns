#pragma once
#include <memory>

#include "Activity.h"
#include "../Mesh.h"

class SaveActivity : public Activity
{
public:
	explicit SaveActivity(std::weak_ptr<Mesh>);
	~SaveActivity() override;

	void TakeAction() override;

private:
	std::weak_ptr<Mesh> mesh_;
};

