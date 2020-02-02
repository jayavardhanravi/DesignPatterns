#pragma once
#include "Iterator.h"
#include "../Collections/MeshCollection.h"

class MeshIterator : public Iterator
{
public:
	explicit MeshIterator(MeshCollection *);
	~MeshIterator();

	int Begin();
	int End();
	void Next();
	int CurrentItem();

private:
	MeshCollection *meshCollection_;
	unsigned int index_ = 0;
};

