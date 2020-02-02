#include "MeshCollection.h"

MeshCollection::MeshCollection(const unsigned int size) : size_(size)
{
	collection_ = new int[size]();
	collection_[0] = 120;
}

MeshCollection::~MeshCollection()
{
	delete[] collection_;
}

int MeshCollection::GetItem(unsigned int index)
{
	return collection_[index];
}

unsigned int MeshCollection::GetSize() const
{
	return size_;
}
