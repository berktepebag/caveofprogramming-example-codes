#include <iostream>
#include <list>

using namespace std;

int main() {

	//Items can be added anywhere in the list.

	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	//Push to beginning of the list
	numbers.push_front(0);

	//Insert an element -before- the iterator
	list<int>::iterator it = numbers.begin();
	it++;
	numbers.insert(it, 100);
	cout << "Element: " << *it << endl;

	//Erase an element
	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;
	eraseIt = numbers.erase(eraseIt);
	cout << "Element: " << *eraseIt << endl;

	//Example
	for(list<int>::iterator it = numbers.begin(); it != numbers.end(); ){

		if(*it == 2) numbers.insert(it, 1234);

		if(*it == 1) it = numbers.erase(it);

		else it++;
	}

	for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){

		cout << *it << endl;
	}

	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
