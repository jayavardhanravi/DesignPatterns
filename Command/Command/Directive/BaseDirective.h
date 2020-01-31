#pragma once

class BaseDirective
{
public:
	virtual ~BaseDirective() = default;

	virtual void ExecuteCommand() = 0;
};
