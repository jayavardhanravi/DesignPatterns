#pragma once
#include "Viewer.h"

class TvViewer : public Viewer
{
public:
	TvViewer(const std::string&);
	~TvViewer();

	void GetUpdates(const std::string &);
	std::string GetKey();

private:
	std::string dataObtained_;
	std::string name_;
};

