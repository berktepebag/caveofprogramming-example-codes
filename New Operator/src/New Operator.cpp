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

int main() {
	//If we instantiate a cat like this after "return 0;" it will be destroyed.
	/*
	Animal cat;
	cat.setName("Bob");
	cat.speak();
	*/

	//But if we use "new" to instantiate a cat
	Animal *pCat1 = new Animal();
	pCat1->setName("John");
	pCat1->speak();
	delete pCat1; //Calling destructor manually. If we do not call "delete" it will keep occupying ram, -MEMORY LEAKS- !!!



	return 0;
}
