//============================================================================
// Name        : References.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void change(double &value){

	cout << "address of value: " << &value << endl;
	value = 101.1;
}

int main() {

	int value1 = 8;
	int &value2 = value1;

	value2 = 10;

	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << value2 << endl;

	double value = 99.9;

	cout << "old value: " << value << endl;
	change(value);
	cout << "new value: " << value << endl;

	return 0;
}
