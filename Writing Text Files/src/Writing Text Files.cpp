#include <iostream>
#include <fstream>

using namespace std;

int main() {

	//1. Method
	//ofstream outFile;
	//2. Method
	fstream outFile;

	string outputFileName = "text.txt";

	//1. Method
	//outFile.open(outputFileName);
	//2. Method
	outFile.open(outputFileName, ios::out);

	if(outFile.is_open()){
		outFile << "Hello there" << endl;
		outFile << 789 << endl;
		outFile.close();
	}else{
		cout << "Could not create file: " << outputFileName << endl;
	}

	return 0;
}
