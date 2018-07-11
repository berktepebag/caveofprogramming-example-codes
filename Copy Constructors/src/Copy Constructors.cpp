//============================================================================
// Name        : Copy.cpp
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
	Animal() {cout << "Animal created." << endl;}
	//**************************************************************************************************************************//
	Animal(const Animal &other){ name = other.name;cout << "Animal created by copying." << endl;  other.speak();} //**** Copy Constructor ****///
	//const is necessary, otherwise we can change the animal we are copying.

	void setName(string name){this->name=name;}
	void speak() const {cout << "My name is: " << name << endl;} //If the method is not changing any variable, declare it "const".
	//If we do not declare const, we cannot use it at Copy Constructor!

};

int main() {


	Animal animal1;
	animal1.setName("Freddy Mercury");

	Animal animal2 = animal1; //Animal() {cout << "Animal created." << endl;} will run only once, because it is not created but copied.
	//animal2.speak(); //Animal2 name is Freddy Mercury. Because we used copy constructor.
	animal2.setName("Bob Marley");

	cout << "*****Animals speaking*****" << endl;
	animal1.speak();
	animal2.speak();

	Animal *pAnimal1 = &animal1;
	Animal *pAnimal2 = &animal2;

	cout << "*****Animals addressing*****" << endl;
	cout << "*pAnimal1: " << pAnimal1 << endl;
	cout << "*pAnimal2: " << pAnimal2 << endl;

	//Another way of creating a copy of animal
	Animal animal3 (animal1);
	animal3.speak();

	return 0;
}
