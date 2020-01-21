#pragma once

#include "CommonSingleton.h"
#include <string>

class TestCommonSingleton final : public CommonSingleton<TestCommonSingleton>
{
public:
	TestCommonSingleton(HelperToken) {};
	TestCommonSingleton() {};

	std::string PrintInfo() const
	{
		return "COMMON SINGLETON INSTANCE";
	};
};