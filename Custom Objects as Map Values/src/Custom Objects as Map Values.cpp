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
		cout << "Copy constructor running!" << endl;
		name = other.name;
		age = other.age;
	}

	void print(){

		cout << name << ": " << age << endl;
	}

};

int main() {

	map<int, Person> people;

	people[0] = Person("Berk", 30);
	people[1] = Person("Ekin", 29);
	people[2] = Person("Yiðit", 31);

	people.insert(make_pair(55, Person("Bob", 45)));
	people.insert(make_pair(56, Person("Sue", 25)));

	for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++){

		cout << it->first << ": " << flush ;
		it->second.print();

	}

	return 0;
}
