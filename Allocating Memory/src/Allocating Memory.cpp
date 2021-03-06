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

class Person{
	string name;
public:
	Person(){"Hello new Person.";}

	Person(const Person &other){
		name = other.name;
	}

	~Person(){
		cout << "Destructor called" << endl;
	}

	void setName(string name){
		this->name = name;
	}

	void speak() const {
		cout << "Hello I am '" << name << "' ." <<endl;
	}

};


int main() {

	int size = 26;
	Person *pPerson = new Person[size];

	char c ='a';

	for (int i = 0; i < size-1; i++, c++) {
		string name(1,c);
		pPerson[i].setName(name);
		pPerson[i].speak();
	}

	cout << "a: " << int(c) << endl;

	Animal *pAnimal = new Animal[5];
	cout << "size of pAnimal: " << sizeof(pAnimal) << endl;

	for(int i=0; i < sizeof(pAnimal); i++){cout << "adress i: " << i << " animal: " << pAnimal << endl;}

	delete [] pAnimal;

	return 0;
}
