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
	int age = 0;
	char *fND = new char[8];
	char *lND = new char[8];
	

	while (loop) {
		cout << "\nPlease enter your first name:\n";
		cin >> fN;
		cout << "\nPlease enter your last name:\n";
		cin >> lN;
		cout << "\nPlease enter your age:\n";
		cin >> age;
		UserDefData* uDD = new UserDefData(fN, lN, age);
		cout << uDD->fN << endl << uDD->lN << endl << uDD->age;

	}
	delete fND;
	delete lND;
}