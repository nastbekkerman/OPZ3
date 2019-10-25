#pragma once
#include <iostream>
#include <string>
#include <stack>
#include "Operator.h"
#include <stdexcept>

const char PLUS = '+', MINUS = '-', MUL = '*', DIV = '/', OPENBRACKET='(', CLOSEBRACKET = ')';


class Read{
public:
	void CheckSimvols(char Znak);
	void ReadPrimer(std::string Primer);
	std::string GetString();
	private:
		std::string primerOpz;
		std::stack <Operator> Simv;
};