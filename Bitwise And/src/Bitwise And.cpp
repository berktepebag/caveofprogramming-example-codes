//============================================================================
// Name        : Bitwise.cpp
// Author      : Berk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


	int color = 0x123456;

	//0x123456 12,34 and 56 is 8 bit. So if we shift by 16 bits, it will be
	// 0xFF---- and shift 8 bits will get 0x--FF-- and no shift 0x----FF
	unsigned char red = (color & 0xFF0000) >> 16;
	unsigned char green = (color & 0x00FF00) >> 8;
	unsigned char blue = (color & 0x0000FF);

	// color: 1000110001111000
	// mask:  1110100001101000
	//result: 1000100001101000

	cout << hex << (int)red << endl;
	cout << hex << (int)green << endl;
	cout << hex << (int)blue << endl;

	//or this way
	unsigned char redAgain = color >> 16;
	cout << hex << (int)redAgain << endl;

	return 0;
}
