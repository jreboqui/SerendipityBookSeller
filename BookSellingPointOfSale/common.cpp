#include "common.h"
#include "pch.h"
#include <iostream>
#include <sstream>

bool IntTryParse(std::string input, int& output)
{
	if (input.length() > 1) { return false; }
	output = -1;
	for (char c : input)
		if (!isdigit(c))
			return false;
	sscanf_s(input.c_str(), "%d", &output);
	return true;
}