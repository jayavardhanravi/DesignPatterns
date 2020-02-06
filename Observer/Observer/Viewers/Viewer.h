#pragma once
#include <string>
#include <iostream>

class Viewer
{
public:
	virtual ~Viewer() {};
	virtual void GetUpdates(const std::string&) = 0;
	virtual std::string GetKey() = 0;
};