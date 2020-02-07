#pragma once

enum Command
{
	INIT = 0x101,
	READY,
	RUNNING,
	STOPPED,
	SHUTDOWN
};