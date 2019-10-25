#include <iostream>
#include <stack>
#include "Read.h"
#include "OPZ.h"
#include"Operator.h"
#include <string>

using namespace std;

int main(){
	OPZ Primerchik("3+4*3+5*9*(8-6)");
	Primerchik.Calculate();
	cout << Primerchik.GetResult()<<endl;
	system("pause");
	return 0;
}