#include "Hashit.h"

TEXT_COMMAND Parse(std::string const& StringIn)
{
	TEXT_COMMAND command = TEXT_COMMAND::ERROR; //default

	if (StringIn == "-addant")
		command = TEXT_COMMAND::CREATE_ANT;
	if (StringIn == "-exit")
		command =  TEXT_COMMAND::EXIT;
	if (StringIn == "-h")
		command = TEXT_COMMAND::HELP;
	if (StringIn == "-antsize")
		command = TEXT_COMMAND::ANTSIZE;
	if (StringIn == "-skin")
		command = TEXT_COMMAND::ANTSKIN;
	if (StringIn == "-x")
		command = TEXT_COMMAND::CLEARPHERO;

	return command;
}