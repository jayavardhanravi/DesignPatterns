#pragma once
#include "Data.h"
#include "ExternalServiceDataAdapter.h"

class DataAcquisition
{
public:
	DataAcquisition();
	~DataAcquisition();

	std::string GetData(TYPES);

private:
	std::unique_ptr<Data> data_ = nullptr;
};

