/*!
* @file Command.cpp
* @brief Design Patterns : Command
* @author Jayavardhan Ravi
* @date 01-31-2020
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
#include <string>

#include "Mesh.h"
#include "Invoker/InputHandler.h"
#include "Activity/DrawActivity.h"
#include "Activity/EraseActivity.h"
#include "Activity/SaveActivity.h"

/*!
* @brief Main Function to test the implementations
*/
int main()
{
	std::shared_ptr<Mesh> mesh = std::make_shared<Mesh>();
	InputHandler inputHandler;

	std::cout << "1: " << inputHandler.SendCommand(Command::DRAW) << "\n" << std::endl;

	{
		std::unique_ptr<Activity> drawActivity = std::make_unique<DrawActivity>(mesh, 2);
		std::unique_ptr<Directive> drawDirective = std::make_unique<Directive>(std::move(drawActivity));
		inputHandler.AddCommand(Command::DRAW, std::move(drawDirective));
		std::cout << "2.1: " << inputHandler.SendCommand(Command::DRAW) << std::endl;
		std::cout << "2.2: " << inputHandler.SendCommand(Command::ERASE) << std::endl;
		std::cout << "2.3: " << inputHandler.SendCommand(Command::SAVE) << std::endl;
		std::cout << "\n" << std::endl;
	}

	{
		srand(time_t(NULL));
		for (auto i = 0; i < 10; i++)
		{
			std::unique_ptr<Activity> drawActivity = std::make_unique<DrawActivity>(mesh, rand() % 10);
			std::unique_ptr<Directive> drawDirective = std::make_unique<Directive>(std::move(drawActivity));
			inputHandler.AddCommand(Command::DRAW, std::move(drawDirective));

			std::unique_ptr<Activity> eraseActivity = std::make_unique<EraseActivity>(mesh);
			std::unique_ptr<Directive> eraseDirective = std::make_unique<Directive>(std::move(eraseActivity));
			inputHandler.AddCommand(Command::ERASE, std::move(eraseDirective));

			std::unique_ptr<Activity> saveActivity = std::make_unique<SaveActivity>(mesh);
			std::unique_ptr<Directive> saveDirective = std::make_unique<Directive>(std::move(saveActivity));
			inputHandler.AddCommand(Command::SAVE, std::move(saveDirective));

			std::cout << i << ".1: " << inputHandler.SendCommand(Command::DRAW) << std::endl;
			std::cout << i << ".2: " << inputHandler.SendCommand(Command::ERASE) << std::endl;
			std::cout << i << ".3: " << inputHandler.SendCommand(Command::SAVE) << std::endl;
			std::cout << "" << std::endl;
		}
	}
}