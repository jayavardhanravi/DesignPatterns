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

bool MeshIterator::End()
{
	return index_ >= meshCollection_->GetSize();
}

void MeshIterator::Next()
{
	index_++;
}

int MeshIterator::CurrentIndex()
{
	return index_;
}

Iterator * MeshCollection::GetIterator()
{
	return new MeshIterator(this);
}
