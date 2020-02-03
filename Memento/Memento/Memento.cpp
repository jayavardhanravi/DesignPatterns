/*!
* @file Memento.cpp
* @brief Design Patterns : Memento
* @author Jayavardhan Ravi
* @date 02-03-2020
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
#include "GuiHistoryHandler.h"
#include "GuiComponent.h"

/*!
* @brief Main Function to test the implementations
*/
int main()
{
	GuiComponent uiComponent;
	GuiData *data = uiComponent.CreateGuiData();
	GuiHistoryHandler historyHandler(&uiComponent);

	std::cout << "Saving States" << std::endl;
	for (auto i = 0; i < 10; i++)
	{
		data->SetData(i);
		data->SetChecked(true);
		data->SetLabel("Data_"+std::to_string(i));
		historyHandler.SaveCurrentState();
		std::cout << data->PrintState() << std::endl;
	}

	std::cout << "Undo the previous states" << std::endl;
	for (auto i = 0; i < 5; i++)
	{
		std::cout << "[DELETED] " << data->PrintState() << std::endl;
		data = historyHandler.RestorePreviousState();
	}

	std::cout << "Number of saved states remaining : " << historyHandler.GetNumberOfSavedStates() << std::endl;

}