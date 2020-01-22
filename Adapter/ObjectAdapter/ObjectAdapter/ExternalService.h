#pragma once

#include <string>

class ExternalService
{
public:
	ExternalService();
	~ExternalService();

	std::string GetServiceData(bool);

private:
	std::string serviceData_;
};

