#pragma once
#include <memory>
#include "../Models/Model.h"

class Handler
{
public:
	virtual ~Handler() {};

	virtual std::string Run() = 0;
	virtual void SetModel(std::unique_ptr<Model> model) 
	{
		if (model)
			model_ = std::move(model);
	};

protected:
	std::unique_ptr<Model> model_ = nullptr;

};
