#include <iostream>
using namespace std;

class Hero {
private:

	int intelligence = 1;
	int strength = 1;
	int agility = 1;

public:

	void setInitials(int intelligance, int strength, int agility){

		this->intelligence = intelligance;
		this->strength = strength;
		this->agility = agility;
	}

	int getInt(){
		return intelligence;
	}
	int getStr(){
		return strength;
	}
	int getAgi(){
		return agility;
	}

	void printInitials(){
		cout << "Int: " << intelligence << " Str: " << strength << " Agi: " << agility << endl;
	}
};

class IntHero : public Hero{

public:
	void castSpell(){
		int intel = getInt();
		int str = getStr();
		int agi = getAgi();

		intel++;
		setInitials(intel,str,agi);
	}

};

int main() {

	IntHero heroInt;
	heroInt.printInitials();
	heroInt.castSpell();
	heroInt.printInitials();



	return 0;
}
