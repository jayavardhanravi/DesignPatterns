#pragma once

#include "Data.h"
#include "ExternalService.h"

class ExternalServiceDataAdapter :	public Data, public ExternalService
{
public:
	ExternalServiceDataAdapter();
	~ExternalServiceDataAdapter();

	std::string GetServiceData(TYPES);
};

