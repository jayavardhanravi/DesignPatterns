#pragma once

template<typename T>
class CommonSingleton
{
public:
	static T& GetInstance();

	CommonSingleton(const CommonSingleton&) = delete;
	CommonSingleton& operator= (const CommonSingleton) = delete;

protected:
	struct HelperToken {};
	CommonSingleton() {};
};

#include <memory>
template<typename T>
T& CommonSingleton<T>::GetInstance()
{
	static const std::unique_ptr<T> singletonInstance_{ new T{HelperToken{}} };
	return *singletonInstance_;
}