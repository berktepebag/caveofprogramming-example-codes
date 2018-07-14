#include <iostream>
#include <fstream>

using namespace std;

int main() {

	string filename = "stats.txt";
	ifstream input;

	input.open(filename);

	if(!input.is_open()){
		return 1;
	}

	while(input){
		string line;

		getline(input, line, ':');

		int population;
		input >> population;

		//C++ 11 only! Read whitespace:
		input >> ws;

		//Breaks if does not find anything to read (whitespace)
		if(!input) break;

		cout << line << " -- " << population << endl;

	}

	input.close();


	return 0;
}
