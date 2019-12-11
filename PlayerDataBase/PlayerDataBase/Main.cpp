#include <iostream>
#include <array>
#include <list>
#include <iterator>
#include "UDD.h"
using std::cout;
using std::cin;
using std::endl;

int main() {
	bool loop = true;
	char fN[64];
	char lN[64];
	int age = 0, maxID = 64;;
	char *fND = new char[maxID];
	char *lND = new char[maxID];
	

	while (loop) {
		cout << "\nPlease enter your first name:\n";
		cin >> fN;
		cout << "\nPlease enter your last name:\n";
		cin >> lN;
		cout << "\nPlease enter your age:\n";
		cin >> age;
		UserDefData* uDD = new UserDefData(fN, lN, age);
		cout << uDD->fN << endl << uDD->lN << endl << uDD->age << endl;
		fND = uDD->fN;
		lND = uDD->lN;
		
	}
	delete fND;
	delete lND;
}