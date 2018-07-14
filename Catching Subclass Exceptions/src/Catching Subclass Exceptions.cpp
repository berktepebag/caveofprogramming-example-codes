#include <iostream>
#include <exception>

using namespace std;

void goesWrong(){
	bool error1Detected = true;
	bool error2Detected = false;

	if(error1Detected) throw bad_alloc();
	if(error2Detected) throw exception();
}

int main() {

	try {
		goesWrong();
	}
	/*
		 * Because bad_alloc is subclass of exception (polymorphism), if catch block of bad_alloc
		 * placed top of exception "Catching bad alloc: std::bad_alloc" will return
		 * (because bad_alloc is also an exception, satisfies catch statement).
		 * If exception was before bad_alloc then exception would be called because it is
		 * parent class of bad_alloc.
		 * Check for warnings <==
		 * Rule of thumb: Subclasses first!
		 */
	catch(exception &e){
					cout << "Catching exception: " << e.what() << endl;
	}
	catch (bad_alloc &e) {
		cout << "Catching bad alloc: " << e.what() << endl;
	}



	return 0;
}
