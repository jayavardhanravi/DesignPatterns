#pragma once

#include <string>

class SimpleSingleton
{
public:
	SimpleSingleton(SimpleSingleton const&) = delete;
	SimpleSingleton& operator= (SimpleSingleton const&) = delete;

	static SimpleSingleton* GetInstance()
	{
		if (!singletonInstance_)
			singletonInstance_ = new SimpleSingleton();
		return singletonInstance_;
	};

	std::string PrintInfo()
	{
		return "SIMPLE SINGLETON INSTANCE";
	};

	static void ResetInstance()
	{
		if (!singletonInstance_)
			delete singletonInstance_;
	}

private:
	SimpleSingleton() {};
	static SimpleSingleton *singletonInstance_;
};

SimpleSingleton* SimpleSingleton::singletonInstance_ = nullptr;
