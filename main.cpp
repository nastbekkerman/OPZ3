#include <iostream>
#include <stack>
#include "Read.h"
#include "OPZ.h"
#include"Operator.h"
#include <string>

using namespace std;

int main(){
	OPZ Primerchik("2/0");
	Primerchik.Calculate();
	cout << Primerchik.GetResult()<<endl;
	system("pause");
	return 0;
}