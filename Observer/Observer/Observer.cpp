/*!
* @file Observer.cpp
* @brief Design Patterns : Observer
* @author Jayavardhan Ravi
* @date 02-06-2020
*
* BSD 2-Clause License
*
* Copyright (c) 2020, Jayavardhan Ravi
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice, this
*    list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
*    this list of conditions and the following disclaimer in the documentation
*    and/or other materials provided with the distribution.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <iostream>

#include "Broadcasters/StockMarket.h"
#include "Viewers/TvViewer.h"
#include "Viewers/RadioViewer.h"

/*!
* @brief Main Function to test the implementations
*/
int main()
{
	StockMarket usaStock("USA");
	StockMarket chinaStock("China");
	StockMarket indiaStock("India");
	StockMarket franceStock("France");

	std::shared_ptr<TvViewer> usaTvViewer = std::make_shared<TvViewer>("USA");
	std::shared_ptr<TvViewer> chinaTvViewer = std::make_shared<TvViewer>("China");
	std::shared_ptr<TvViewer> indiaTvViewer = std::make_shared<TvViewer>("India");
	std::shared_ptr<TvViewer> franceTvViewer = std::make_shared<TvViewer>("France");

	std::shared_ptr<RadioViewer> usaRadioViewer = std::make_shared<RadioViewer>("USA");
	std::shared_ptr<RadioViewer> chinaRadioViewer = std::make_shared<RadioViewer>("China");
	std::shared_ptr<RadioViewer> indiaRadioViewer = std::make_shared<RadioViewer>("India");
	std::shared_ptr<RadioViewer> franceRadioViewer = std::make_shared<RadioViewer>("France");

	std::cout << "USA TV subscribed to stock updates = " << usaStock.Register(usaTvViewer) << std::endl;
	std::cout << "USA Radio subscribed to stock updates = " << usaStock.Register(usaRadioViewer) << std::endl;
	std::cout << "France TV subscribed to stock updates = " << franceStock.Register(franceTvViewer) << std::endl;
	std::cout << "France Radio subscribed to stock updates = " << franceStock.Register(franceRadioViewer) << std::endl;
	std::cout << "China TV subscribed to stock updates = " << chinaStock.Register(chinaTvViewer) << std::endl;
	std::cout << "China Radio subscribed to stock updates = " << chinaStock.Register(chinaRadioViewer) << std::endl;
	std::cout << "India TV subscribed to stock updates = " << indiaStock.Register(indiaTvViewer) << std::endl;
	std::cout << "India Radio subscribed to stock updates = " << indiaStock.Register(indiaRadioViewer) << std::endl;

	std::cout << std::endl;

	usaStock.UpdateStockPrice("Google", 1921.13);
	chinaStock.UpdateStockPrice("Tencent", 521.13);
	indiaStock.UpdateStockPrice("Reliance", 152.98);
	franceStock.UpdateStockPrice("Dassault", 987.84);

	std::cout << std::endl;

	std::cout << "France Radio unsubscribed from stock updates = " << franceStock.UnRegister(franceRadioViewer) << std::endl;
	std::cout << "France Tv unsubscribed from stock updates = " << franceStock.UnRegister(franceTvViewer) << std::endl;
	std::cout << "[Again] France Tv unsubscribed from stock updates = " << franceStock.UnRegister(franceTvViewer) << std::endl;
	std::cout << "India Radio unsubscribed from stock updates = " << indiaStock.UnRegister(indiaRadioViewer) << std::endl;
	std::cout << "USA TV subscribed from China stock updates = " << chinaStock.Register(usaTvViewer) << std::endl;
	std::cout << "USA TV subscribed from India stock updates = " << indiaStock.Register(usaTvViewer) << std::endl;
	std::cout << "USA TV subscribed from France stock updates = " << franceStock.Register(usaTvViewer) << std::endl;
	std::cout << "[Again] USA TV subscribed from USA stock updates = " << usaStock.Register(usaTvViewer) << std::endl;

	std::cout << std::endl;

	usaStock.UpdateStockPrice("Google", 1921.13);
	chinaStock.UpdateStockPrice("Tencent", 521.13);
	indiaStock.UpdateStockPrice("Reliance", 152.98);
	franceStock.UpdateStockPrice("Dassault", 987.84);

}
