#include "TvViewer.h"

TvViewer::TvViewer(const std::string& name) : name_(name)
{
}

TvViewer::~TvViewer()
{
}

void TvViewer::GetUpdates(const std::string& dataObtained)
{
	dataObtained_ = dataObtained;
	std::cout << "[TV] " << name_ << " : " << dataObtained_ << std::endl;
}

std::string TvViewer::GetKey()
{
	return name_;
}
