#pragma once
#include <iostream>
#include <stack>
#include "Read.h"

class OPZ {
public:
	OPZ(std::string primer);
	void Calculate();
	int GetResult();
	std::string GetString();
private:
	std::stack<int> chisla;
	int result;
	std::string primer;
};