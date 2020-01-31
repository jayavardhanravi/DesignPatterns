#pragma once
#include <memory>

#include "Activity.h"
#include "../Mesh.h"

class EraseActivity : public Activity
{
public:
	explicit EraseActivity(std::weak_ptr<Mesh>);
	~EraseActivity() override;

	void TakeAction() override;

private:
	std::weak_ptr<Mesh> mesh_;
};

