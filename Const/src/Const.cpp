//============================================================================
// Name        : Const.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
	string name;

public:
	void setName(string name){this->name=name;}
	void speak() const {cout << "My name is: " << name << endl;} //If the method is not changing any variable, declare it "const".

};

int main() {

	const double PI = 3.141592;
	cout << "PI: " << endl;

	Animal animal;
	animal.setName("Freddy Mercury");
	animal.speak();

	int value = 7;
	cout << "Value: " << value << endl;

	int *pValue = &value;
	cout << *pValue << endl;

	int number = 11;
	pValue = &number; // Error with this: int * const pValue = &value; (cannot reassign pointer to point somewhere else)
	cout << *pValue << endl; // Error with this: const int *pValue = &value; (constant int pointer)

	return 0;
}
