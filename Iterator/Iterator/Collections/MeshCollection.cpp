#include "MeshCollection.h"

MeshCollection::MeshCollection(const unsigned int size) : size_(size)
{
	collection_ = new int[size]();
}

MeshCollection::~MeshCollection()
{
	delete[] collection_;
}

int MeshCollection::GetItem(unsigned int index)
{
	return collection_[index];
}

bool MeshCollection::SetItem(unsigned int index, int data)
{
	if (index <= size_)
	{
		collection_[index] = data;
		return true;
	}
	return false;
}

unsigned int MeshCollection::GetSize() const
{
	return size_;
}
