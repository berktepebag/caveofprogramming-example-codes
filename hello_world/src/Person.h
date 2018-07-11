/*
 * Person.h
 *
 *  Created on: 26 Haz 2018
 *      Author: Desktop
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {

private:
	string name;


public:
	Person();
	virtual ~Person();

	string toString();
	void setName(string newName);
	string getName();
};

#endif /* PERSON_H_ */
