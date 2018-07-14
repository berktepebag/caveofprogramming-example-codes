#include <iostream>
#include <fstream>

using namespace std;

//Without this, result will be 64 bytes.
//With, it will be 62 bytes (removes padding)
#pragma pack(push, 1)

struct Person{

	char name[50];
	int age;
	double height;
};

#pragma pack(pop)

int main() {

	Person someone = {"Frodo" , 220, 0.8};

	string fileName = "test.bin";

	ofstream outputFile;

	//ios::out if fstream used.
	//outputFile.open(fileName, ios::binary|ios::out);
	outputFile.open(fileName, ios::binary);

	if(outputFile.is_open()){

		//reinterpret_cast<char *> new way of casting. old way (char *)
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();
	}else{
		cout << "Could not create file " +fileName;
	}

	cout << sizeof(Person) << endl;

	///////////////////////////
	// Read the binary file. //
	//////////////////////////

	Person someoneElse = {};

	ifstream inputFile;

	inputFile.open(fileName, ios::binary);

	if(inputFile.is_open()){

		//reinterpret_cast<char *> new way of casting. old way (char *)
		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

		inputFile.close();
	}else{
		cout << "Could not read file " +fileName;
	}

	cout << someoneElse.name <<", " << someoneElse.age << ", " << someoneElse.height << endl;

	return 0;
}
