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

	//**** Copy Constructor ****// const is necessary, otherwise we can change the animal we are copying.
	Animal(const Animal &other)	{
		name = other.name;
		cout << "Animal created by copying." << endl;
		other.speak();}

	~Animal() {
		cout << "Destructor called" << endl;
	}

	void setName(string name){
		this->name=name;}

	void speak() const {
		cout << "My name is: " << name << endl;}
	//If the method is not changing any variable, declare it "const".
	//If we do not declare const, we cannot use it at Copy Constructor!

};

Animal *createAnimal(){

	Animal *pAnimal = new Animal();
	cout << "pAnimal Address: " << pAnimal << endl;
	pAnimal->setName("Alex");
	return pAnimal;
}

int main() {

	Animal *pFrog = createAnimal();
	cout << "pFrog Address: " << pFrog << endl;
	//Created by copy constructor! So the addresses are the same.

	pFrog->speak();

	delete pFrog;

	return 0;
}
