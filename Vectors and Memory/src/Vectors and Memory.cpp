#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<double> numbers(0);

	cout << "Size: " << numbers.size() << endl;

	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;

	for (int i = 0; i < 10000; i++) {

		if(numbers.capacity() != capacity){
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}

		numbers.push_back(i);
	}

	/*
	 * Result with vector<double> numbers(20)
	 * Size: 20
	 * Capacity: 20
	 * Capacity: 40
	 * Capacity: 80
	 * Capacity: 160
	 * Capacity: 320
	 * Capacity: 640
	 * Capacity: 1280
	 * Capacity: 2560
	 * Capacity: 5120
	 * Capacity: 10240
	 */

	/*
	 * Result with vector<double> numbers(0)
	 * Size: 0
	 *Capacity: 8
	 *Capacity: 16
	 *Capacity: 32
	 *Capacity: 64
	 *Capacity: 128
	 *Capacity: 256
	 *Capacity: 512
	 *Capacity: 1024
	 *Capacity: 2048
	 *Capacity: 4096
	 *Capacity: 8192
	 *Capacity: 16384
	 */

	//Clears array but capacity does not change
	numbers.clear();
	cout << "Capacity: " << numbers.capacity() << endl;

	//Resizes Array, capacity does not change
	numbers.resize(100);
	cout << numbers[2] << endl;
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	//Reserve
	numbers.reserve(100000);
	cout << numbers[2] << endl;
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
