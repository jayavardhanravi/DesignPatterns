#include "ExternalServiceDataAdapter.h"

ExternalServiceDataAdapter::ExternalServiceDataAdapter(): externalService_(std::make_unique<ExternalService>())
{
}

ExternalServiceDataAdapter::~ExternalServiceDataAdapter()
{
}

std::string ExternalServiceDataAdapter::GetServiceData(TYPES dataQuery)
{
	if (externalService_)
	{
		switch (dataQuery)
		{
		case TYPES::POSITIVES:
			return externalService_->GetServiceData(true);
		case TYPES::NEGATIVES:
			return externalService_->GetServiceData(false);
		default:
			return "";
		}
	}
	return "";
}
