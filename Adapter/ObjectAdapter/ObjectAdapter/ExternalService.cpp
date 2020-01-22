#include "ExternalService.h"

ExternalService::ExternalService()
{
}

ExternalService::~ExternalService()
{
}

std::string ExternalService::GetServiceData(bool dataState)
{
	if (dataState)
		serviceData_ = "External Service - POSITIVE DATA OBTAINED";
	else
		serviceData_ = "External Service - NEGATIVE DATA OBTAINED";
	return serviceData_;
}
