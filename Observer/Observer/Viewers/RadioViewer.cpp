#include "RadioViewer.h"

RadioViewer::RadioViewer(const std::string &name) : name_(name)
{
}

RadioViewer::~RadioViewer()
{
}

void RadioViewer::GetUpdates(const std::string& dataObtained)
{
	dataObtained_ = dataObtained;
	std::cout << "[RADIO] "<< name_ << " : " << dataObtained_ << std::endl;
}

std::string RadioViewer::GetKey()
{
	return name_;
}
