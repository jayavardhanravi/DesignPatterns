#pragma once
#include "Broadcaster.h"

class StockMarket : public Broadcaster
{
public:
	StockMarket(const std::string&);
	~StockMarket();

	void UpdateStockPrice(const std::string&, double);

private:
	std::string country_;
};

