#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <mutex>

#include "../Viewers/Viewer.h"

class Broadcaster
{
public:
	virtual ~Broadcaster() { TerminateBroadcaster(); };

	bool Register(std::weak_ptr<Viewer>);
	bool UnRegister(std::weak_ptr<Viewer>);
	void SendUpdates(const std::string&);

private:
	void TerminateBroadcaster();

private:
	std::vector<std::weak_ptr<Viewer>> viewerCollection;
	std::mutex lockObject;
};