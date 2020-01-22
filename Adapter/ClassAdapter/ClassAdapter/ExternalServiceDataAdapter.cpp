#include "ExternalServiceDataAdapter.h"

ExternalServiceDataAdapter::ExternalServiceDataAdapter()
{
}

ExternalServiceDataAdapter::~ExternalServiceDataAdapter()
{
}

std::string ExternalServiceDataAdapter::GetServiceData(TYPES dataQuery)
{
	switch (dataQuery)
	{
	case TYPES::POSITIVES:
		return ExternalService::GetServiceData(true);
	case TYPES::NEGATIVES:
		return ExternalService::GetServiceData(false);
	default:
		return "";
	}
}
