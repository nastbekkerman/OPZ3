#pragma once
#include <iostream>
#include <stack>
#include "Read.h"

class OPZ {
public:
	OPZ(std::string primer);
	OPZ();
	void SetOPZ(std::string primer);
	void Calculate();
	int GetResult();
	std::string GetString();
	std::string getOpz();
private:
	std::stack<int> chisla;
	int result;
	std::string primer;
	std::string opz_redi;
};