#pragma once
#include <memory>

#include "BaseDirective.h"
#include "../Activity/Activity.h"

class Directive : public BaseDirective
{
public:
	explicit Directive(std::unique_ptr<Activity>);
	~Directive();

	void ExecuteCommand() override;

private:
	std::unique_ptr<Activity> activity_;
};

