#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector< vector<int> > grid(3, vector<int>(4, 7));

	grid[1].push_back(8);

	for(unsigned int row=0; row < grid.size(); row++){
		for(unsigned int col=0; col < grid[row].size(); col++){
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
