#pragma once

class Iterator
{
public:
	virtual ~Iterator() {};

	virtual int Begin() = 0;
	virtual int End() = 0;
	virtual void Next() = 0;
	virtual int CurrentItem() = 0;
};
