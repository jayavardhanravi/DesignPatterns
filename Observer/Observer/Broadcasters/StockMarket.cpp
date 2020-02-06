#include "StockMarket.h"

StockMarket::StockMarket(const std::string& country) : country_(country)
{
}

StockMarket::~StockMarket()
{
}

void StockMarket::UpdateStockPrice(const std::string& company, double price)
{
	SendUpdates("[" + country_ + "] " + company + " -> " + std::to_string(price));
}

