/*!
* @file Mediator.cpp
* @brief Design Patterns : Mediator
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
#include <memory>

#include "DataManager.h"
#include "ButtonComponent.h"

/*!
* @brief Main Function to test the implementations
*/
int main()
{
	std::unique_ptr<DataManager> manager = std::make_unique<DataManager>();

	std::unique_ptr<ButtonComponent> dataButton_A = std::make_unique<ButtonComponent>(0x201);
	std::unique_ptr<ButtonComponent> dataButton_B = std::make_unique<ButtonComponent>(0x202);
	std::unique_ptr<ButtonComponent> dataButton_C = std::make_unique<ButtonComponent>(0x203);

	manager->Register(Module::INTERNAL, dataButton_A.get());

	manager->Register(Module::EXTERNAL, dataButton_A.get());
	manager->Register(Module::EXTERNAL, dataButton_B.get());

	manager->Register(Module::LOGGING, dataButton_A.get());
	manager->Register(Module::LOGGING, dataButton_B.get());
	manager->Register(Module::LOGGING, dataButton_C.get());

	manager->Broadcast(Module::INTERNAL, "Data_1 : 10.0 20.0 30.0");
	manager->Broadcast(Module::EXTERNAL, "Data_2 : 15.0 25.0 35.0");
	manager->Broadcast(Module::LOGGING, "Log Data : 10.2, 11320.2, 1350.4");

	dataButton_A->AttachToGuiManager(manager.get());
	dataButton_A->SendData("Button A Data");
	dataButton_A->SendData(Module::EXTERNAL, "Button A Data (Only External Module)");
}