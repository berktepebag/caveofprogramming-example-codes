#include <iostream>
#include <map>

using namespace std;

int main() {

	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Ekin"] = 28;
	ages["Berk"] = 30;

	//Overwrites on Mike's age
	ages["Mike"] = 70;
	//So Mike's age will printout 70.
	cout << ages["Mike"] << endl;

	//Inserting a pair to the map
	ages.insert(pair<string,int> ("Peter",100));
	//Or
	ages.insert(make_pair("Pan",200));

	//If try to print a key does not exist, it will automatically
	//added to map. SO BE CAREFUL!
	cout << ages["Sue"] << endl;
	//Instead, to check if a key exists:
	if(ages.find("Vicky") != ages.end()){
		cout << "Found Vicky" << endl;
	}else cout << "Key not found!" << endl;

	for(map<string,int>::iterator it=ages.begin(); it != ages.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}

	//Pairing
	for(map<string,int>::iterator it=ages.begin(); it != ages.end(); it++)
	{
		pair<string, int> age = *it;

		cout << age.first << ": " << age.second << endl;
	}

	return 0;
}
