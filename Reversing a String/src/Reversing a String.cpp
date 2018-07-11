//============================================================================
// Name        : Reversing.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "hello";

	//Remove empty end character by -1
	int nChars = sizeof(text)-1;

	char *pStart = text;

	char *pEnd = text + nChars-1;

	while(pStart < pEnd){

		char swap = *pStart;
		*pStart = *pEnd;
		*pEnd = swap;

		pStart++;
		pEnd--;

	}
	cout << text << flush;

	return 0;
}



