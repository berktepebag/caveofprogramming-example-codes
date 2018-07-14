#include <iostream>
#include <map>
using namespace std;


class Person{

private:
	string name;
	int age;

public:
	Person(): name(""), age(0){}

	Person(string name, int age): name(name), age(age){}

	//Copy Constructor
	Person(const Person &other){
		//cout << "Copy constructor running!" << endl;
		name = other.name;
		age = other.age;
	}

	void print() const{

		cout << name << ": " << age << flush;
	}

	//Overload "<" operator
	bool operator < (const Person &other) const {
		if(name == other.name) return age < other.age;
		else return name < other.name;
	}

};

int main() {

	map<Person, int> people;

	people[Person("Berk", 30)] = 30;
	people[Person("Berk", 330)] = 123;
	people[Person("Ekin", 29)] = 29;
	people[Person("Yiðit", 31)] = 31;

	for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++){

		cout << it->second<< ": " << flush ;
		it->first.print();
		cout << endl;

	}

	return 0;
}
