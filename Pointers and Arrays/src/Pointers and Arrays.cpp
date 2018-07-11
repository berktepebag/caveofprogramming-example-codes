//============================================================================
// Name        : Pointers.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string texts[] = {"one","two","three"};

	string *pTexts = texts;

	cout << "size of the string array: "<<sizeof(texts)/sizeof(string) << endl;

	for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {

		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < sizeof(texts)/sizeof(string); i++, pTexts++) {

		cout << pTexts << " " << flush;
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	string *pElement = &texts[0];
	string *pEnd = &texts[2];

	while(true){

		cout << *pElement << " " << flush;

		if(pElement == pEnd){break;}

		pElement++;
	}




	return 0;
}
