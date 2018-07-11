//============================================================================
// Name        : hello_world.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
#include <sstream>

using namespace std;

int main() {

	Person person;

	person.setName("Alex");
	cout << person.toString() << endl;
	cout << person.getName() << endl;

	return 0;
}
