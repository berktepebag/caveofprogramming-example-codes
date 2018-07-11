//============================================================================
// Name        : Pointers.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void manipulate(double value){

	cout << "getting into manipulate: " << value << endl;
	value  = 100.1;
	cout << "getting out manipulate: " << value << endl;
}

void manipulate_pointer(double *pValue){

	cout << "getting into manipulate pointer: " << *pValue << endl;
	*pValue  = 100.1;
	cout << "getting out manipulate pointer: " << *pValue << endl;
}

int main() {

	int nValue = 8;

	//Gets pointer address, * declares it is an pointer and & gives the address at ram
	int *pnValue = &nValue;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int address: " << pnValue << endl;
	cout << "Int value to via pointer: " << *pnValue << endl;

	double dValue = 123.4;
	cout << "1. dValue: " << dValue << endl;

	manipulate(dValue);
	cout << "2. dValue: " << dValue << endl;

	manipulate_pointer(&dValue);
	cout << "3. dValue: " << dValue << endl;

	return 0;
}
