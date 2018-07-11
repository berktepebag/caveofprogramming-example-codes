//============================================================================
// Name        : thisPointer.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person person1;
	Person person2("Berk", 30);
	Person person3("Ekin", 29);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;

	cout << person2.toString() << "; memory location: " << &person2 << endl;
	cout << person3.toString() << "; memory location: " << &person3 << endl;

	return 0;
}
