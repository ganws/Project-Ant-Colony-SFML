#include<iostream>

enum class TEXT_COMMAND
{
	EXIT = 0,
	CREATE_ANT = 1,
	ERROR = 2,
	HELP = 3,
	ANTSIZE = 4,
	ANTSKIN = 5
};

TEXT_COMMAND Parse(std::string const & StringIn);
