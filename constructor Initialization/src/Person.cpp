/*
 * Person.cpp
 *
 *  Created on: 27 Haz 2018
 *      Author: Desktop
 */

#include "Person.h"

string Person::toString(){

	stringstream ss;

	ss << "Persons name is : ";
	ss << name;
	ss << " age is : ";
	ss << age;

	return ss.str();
}

