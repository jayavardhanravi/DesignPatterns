#include "Directive.h"

Directive::Directive(std::unique_ptr<Activity> activity) : activity_(std::move(activity))
{
}

Directive::~Directive()
{
}

void Directive::ExecuteCommand()
{
	activity_->TakeAction();
}
