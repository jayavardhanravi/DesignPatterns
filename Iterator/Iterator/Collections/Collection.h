#pragma once

class Iterator;
class Collection
{
public:
	virtual ~Collection() {};
	virtual Iterator *GetIterator() = 0;
};
