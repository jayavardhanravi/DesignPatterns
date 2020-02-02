#include "MeshIterator.h"

MeshIterator::MeshIterator(MeshCollection *meshCollection): meshCollection_(meshCollection), index_(0)
{
}

MeshIterator::~MeshIterator()
{
}

int MeshIterator::Begin()
{
	return index_ = 0;
}

int MeshIterator::End()
{
	return meshCollection_->GetSize();
}

void MeshIterator::Next()
{
	index_++;
}

int MeshIterator::CurrentItem()
{
	if (index_ >= End())
		return -1;
	return meshCollection_->GetItem(index_);
}

Iterator * MeshCollection::GetIterator()
{
	return new MeshIterator(this);
}
