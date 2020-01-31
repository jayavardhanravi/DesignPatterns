#pragma once
#include <map>
#include <memory>

#include "Commands.h"
#include "../Directive/Directive.h"

class InputHandler
{
public:
	InputHandler();
	~InputHandler();

	std::string SendCommand(Command);
	void AddCommand(Command, std::unique_ptr<Directive>);

private:
	std::map<Command, std::unique_ptr<Directive>> commandCollection_;
};

