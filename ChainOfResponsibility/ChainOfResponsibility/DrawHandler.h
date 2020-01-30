#pragma once

#include <string>

class DrawHandler
{
public:
	virtual ~DrawHandler() {};

	virtual void AddNextHandler(DrawHandler *nextHandler)
	{
		if (nextHandler_)
			nextHandler_->AddNextHandler(nextHandler);
		else
			nextHandler_ = nextHandler;
	};

	virtual std::string Draw(int vertices)
	{
		if (nextHandler_)
			return nextHandler_->Draw(vertices);
		else
			return " [Draw library cannot support] ";
	};

private:
	DrawHandler *nextHandler_ = nullptr;
};
