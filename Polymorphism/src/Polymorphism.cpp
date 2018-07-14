//============================================================================
// Name        : Polymorphism.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{

public:
	//Pure virtual method
	virtual void speak() = 0;

	virtual ~Animal() {};
};

class Cat : public Animal{

public:
	virtual void speak(){

		cout << "rerere" << endl;
	}

	virtual ~Cat(){};

};

class StrayCat : Cat{

public:
	/*
	* If not defined as "virtual" strayCat will call upper classes Cat.speak()
	* "rerere" unless it is also defined "virtual". Anything not defined as
	* "virtual" will be taken into consideration.	*
	*/
	virtual void speak(){
		cout << "roooorrr" << endl;
	}

	virtual ~StrayCat(){};

};



int main() {

	StrayCat *sCat = new StrayCat();

	sCat->speak();

	delete sCat;

	return 0;
}
