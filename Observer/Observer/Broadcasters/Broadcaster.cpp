#include "Broadcaster.h"


void Broadcaster::TerminateBroadcaster()
{
	viewerCollection.clear();
}

bool Broadcaster::Register(std::weak_ptr<Viewer> subscriber)
{
	try
	{
		auto data = subscriber.lock();
		for (int i = 0; i < viewerCollection.size(); ++i)
		{
			auto iterData = viewerCollection[i].lock();
			if (data && iterData && iterData == data)
				return false;
		}
		viewerCollection.push_back(subscriber);
	}
	catch (std::exception &error)
	{
		std::cerr << "[Exception] : Unable to push element ot collection. " << error.what() << std::endl;
		return false;
	}
	return true;
}

bool Broadcaster::UnRegister(std::weak_ptr<Viewer> subscriber)
{
	auto data = subscriber.lock();
	for (int i = 0; i < viewerCollection.size(); ++i)
	{
		auto iterData = viewerCollection[i].lock();
		if (data && iterData && iterData == data)
		{
			viewerCollection.erase(viewerCollection.begin() + i);
			return true;
		}
	}
	std::cout << "[Failed] Subscriber doesn't exist..." << std::endl;
	return false;
}

void Broadcaster::SendUpdates(const std::string& updateMessage)
{
	for (auto &subscriber : viewerCollection)
	{
		auto data = subscriber.lock();
		if (data)
			data->GetUpdates(updateMessage);
	}
}