#pragma once
#include "Viewer.h"

class RadioViewer : public Viewer
{
public:
	RadioViewer(const std::string &);
	~RadioViewer();

	void GetUpdates(const std::string &);
	std::string GetKey();

private:
	std::string dataObtained_;
	std::string name_;
};

