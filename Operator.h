#pragma once
#include <iostream>

class Operator {
	int Prioritet;
	char Znak;

public:
	Operator(int Prioritet, char Znak);
	void SetPrioritet(int p);
	int GetPrioritet();
	char GetZnak();
};