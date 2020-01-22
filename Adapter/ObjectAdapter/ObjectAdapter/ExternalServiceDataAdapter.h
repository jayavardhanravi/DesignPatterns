#pragma once

#include "Data.h"
#include "ExternalService.h"

class ExternalServiceDataAdapter :	public Data
{
public:
	ExternalServiceDataAdapter();
	~ExternalServiceDataAdapter();

	std::string GetServiceData(TYPES);

private:
	std::unique_ptr<ExternalService> externalService_ = nullptr;
};

