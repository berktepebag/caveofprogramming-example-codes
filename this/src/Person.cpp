/*
 * Person.cpp
 *
 *  Created on: 27 Haz 2018
 *      Author: Desktop
 */

#include "Person.h"

Person::Person() {

	age = 0;
	name = "John Doe";
}

Person::Person(string name, int age){

	this->name = name;
	this->age = age;

	cout << "memory location of this: " << this << endl;

}

string Person::toString(){

	stringstream ss;

	ss << "Persons name is : ";
	ss << name;
	ss << " age is : ";
	ss << age;

	return ss.str();
}

