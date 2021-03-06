#pragma once
#include "Collection.h"

class MeshIterator;
class MeshCollection : public Collection
{
public:
	explicit MeshCollection(const unsigned int);
	~MeshCollection() override;

	Iterator * GetIterator();

	int GetItem(unsigned int);
	unsigned int GetSize() const;
	bool SetItem(unsigned int, int);

private:
	int *collection_;
	unsigned int size_;
};

