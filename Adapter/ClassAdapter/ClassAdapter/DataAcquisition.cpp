#include "DataAcquisition.h"

DataAcquisition::DataAcquisition(): data_(std::make_unique<ExternalServiceDataAdapter>())
{
}

DataAcquisition::~DataAcquisition()
{
}

std::string DataAcquisition::GetData(TYPES dataQuery)
{
	if(data_)
		return data_->GetServiceData(dataQuery);
	return "";
}
