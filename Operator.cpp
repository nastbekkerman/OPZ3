#pragma once
#include "Operator.h"


Operator::Operator(int Prioritet, char Znak) {
		this->Prioritet = Prioritet;
		this->Znak = Znak;
	}
void Operator::SetPrioritet(int p)
{
	this->Prioritet = p;
}
int Operator::GetPrioritet()
{
	return Prioritet;
}
char Operator::GetZnak()
{
	return Znak;
}




