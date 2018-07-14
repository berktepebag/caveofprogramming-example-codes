//============================================================================
// Name        : Exception.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void mightGoWrong() {

	bool error1 = true;
	bool error2 = true;

	int numb1 = 1;
	int numb2 = 2;

	//if(numb1 != numb2) throw 3;
	if(numb1 != numb2) throw "Numbers are not equal!";

	if(error1) throw "Something went wrong";
	if(error2) throw "Ups something went really wrong";
}


int main() {

	try{
		mightGoWrong();
	}
	catch(int e){
		cout << "Error Code: " << e << endl;
	}
	catch(char const * e){
		cout << "Error Message: " << e << endl;
	}
	catch(string &e){
		cout << "String Error Message: " << e << endl;
	}

	cout << "Still running" << endl;

	return 0;
}
