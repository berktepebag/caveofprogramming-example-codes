/*
 * Person.h
 *
 *  Created on: 27 Haz 2018
 *      Author: Desktop
 */

#ifndef PERSON_H_
#define PERSON_H_


#include <iostream>
#include <sstream>

using namespace std;

class Person {
private:

	string name;
	int age;

public:
	Person();
	Person(string name, int age);

	string toString();

};



#endif /* PERSON_H_ */
