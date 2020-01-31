#include "InputHandler.h"

InputHandler::InputHandler()
{
}

InputHandler::~InputHandler()
{
}

std::string InputHandler::SendCommand(Command command)
{
	if (commandCollection_.find(command) != commandCollection_.end())
	{
		commandCollection_[command]->ExecuteCommand();
		return "[COMMAND EXECUTED]";
	}
	else
		return "[COMMAND NOT FOUND]";
}

void InputHandler::AddCommand(Command command, std::unique_ptr<Directive> directive)
{
	if (commandCollection_.find(command) == commandCollection_.end())
		commandCollection_.insert(std::make_pair(command, std::move(directive)));
	else
		commandCollection_[command] = std::move(directive);
}
