#include <iostream>
#include <fstream>

using namespace std;

int main() {

	string fileName = "text.txt";

	ofstream ofStreamFile;

	ofStreamFile.open(fileName);

	if(ofStreamFile.is_open()){
		ofStreamFile << "This is first line." << endl;
		ofStreamFile << "This is second line." << endl;
		ofStreamFile << "This is third line." << endl;
		ofStreamFile.close();
	}else{
		cout << "Could not create file: " << fileName << endl;
	}

	ifstream ifStreamFile;

	ifStreamFile.open(fileName);

	if (ifStreamFile.is_open()){
		string line;

		while(ifStreamFile){
			getline(ifStreamFile, line);
			cout << line << endl;
		}
		ifStreamFile.close();
	}
	else{
		cout << "Could not read file: " << fileName << endl;
	}







	return 0;
}
