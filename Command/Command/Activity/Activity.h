#pragma once

class Activity
{
public:
	virtual ~Activity() = default;

	virtual void TakeAction() = 0;
};
