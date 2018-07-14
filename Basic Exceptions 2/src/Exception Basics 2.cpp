#include <iostream>
using namespace std;

class CanGoWrong{
public:
	CanGoWrong(){
		char *pMemory = new char[99999999999999999999999];
		delete [] pMemory;
	}
};

int main() {

	try{
		CanGoWrong cgw;
	}
	//Explanation of why we are using &(reference) ->
	//http://www.informit.com/articles/article.aspx?p=373339&seqNum=2
	//https://stackoverflow.com/questions/2023032/catch-exception-by-pointer-in-c
	catch(bad_alloc &e){
		cout << "Caught exception: " << e.what() << endl;
	}

	cout << "Still running" << endl;

	return 0;
}

