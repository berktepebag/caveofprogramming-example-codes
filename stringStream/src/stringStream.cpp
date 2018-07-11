//============================================================================
// Name        : hello_world.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>

using namespace std;

int main() {

	string name = "Berk";
	int age = 30;

	stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << " age is: ";
	ss << age;

	string info = ss.str();

	cout << info << endl; // prints !!!Hello World!!!

	return 0;
}
