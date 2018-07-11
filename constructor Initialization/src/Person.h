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
	Person(): name("John Doe"), age(0) {};
	Person(string name, int age): name(name), age(age){
		//Created variables using name(name), age(age) notation.
	};

	string toString();

};



#endif /* PERSON_H_ */
