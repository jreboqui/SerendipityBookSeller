#pragma once

#include <string>

bool IntTryParse(std::string input, int& output);
bool IntTryParseChoice(std::string input, int& output);
bool DoubleTryParse(std::string input, double& output);

int promptUntilValidInt();
double promptUntilValidDouble();
