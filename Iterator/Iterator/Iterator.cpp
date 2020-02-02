#include <iostream>
#include <string>

#include "Iterators/Iterator.h"
#include "Collections/MeshCollection.h"

int main()
{
	long N = 500;
	MeshCollection *collectionA = new MeshCollection(N);

	Iterator *iter = collectionA->GetIterator();
	for (; !iter->End(); iter->Next())
	{
		std::cout << "Item : " << std::to_string(iter->CurrentItem()) << std::endl;
	}
}