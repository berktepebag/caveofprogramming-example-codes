/*
 * Person.cpp
 *
 *  Created on: 26 Haz 2018
 *      Author: Desktop
 */

#include "Person.h"

Person::Person() {
	// TODO Auto-generated constructor stub
	name = "Berk";

}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

string Person::toString(){

	return "Person's name is: " + name;
}

void Person::setName(string newName){

	name = newName;
}

string Person::getName(){

	return name;
}
