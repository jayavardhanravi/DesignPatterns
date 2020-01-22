#pragma once

#include <memory>
#include <string>

enum class TYPES
{
	POSITIVES,
	NEGATIVES
};

class Data
{
public:
	virtual ~Data() {};

	virtual std::string GetServiceData(TYPES) = 0;
};
