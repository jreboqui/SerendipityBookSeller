#include "common.h"
#include "pch.h"
#include <iostream>
#include <sstream>

bool IntTryParse(std::string input, int& output)
{

	output = -1;
	for (char c : input)
		if (!isdigit(c))
			return false;
	sscanf_s(input.c_str(), "%d", &output);
	return true;
}

bool DoubleTryParse(std::string input, double& output)
{
	
	output = -1;
	for (char c : input)
		if (!isdigit(c) && c != '.') {
			std::cout << "char c is " << c << std::endl;
			return false;
		}
	sscanf_s(input.c_str(), "%lf", &output);
	std::cout << "Returning " << output << std::endl;
	return true;
}

bool IntTryParseChoice(std::string input, int& output)
{
	if (input.length() > 1) { return false; }
	output = -1;
	for (char c : input)
		if (!isdigit(c))
			return false;
	sscanf_s(input.c_str(), "%d", &output);
	return true;
}


int promptUntilValidInt() {

	std::string input;
	int input_integer = -1;

	std::cin >> input;
	while (!IntTryParse(input, input_integer)) {
		std::cout << "Please enter a valid input: ";
		std::cin >> input;
	}

	return input_integer;
}

double promptUntilValidDouble() {

	std::string input;
	double input_double = -1;

	std::cin >> input;
	while (!DoubleTryParse(input, input_double)) {
		std::cout << "Please enter a valid input: ";
		std::cin >> input;
	}

	return input_double;

}
