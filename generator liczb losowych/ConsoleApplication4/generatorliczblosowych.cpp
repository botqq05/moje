#include <iostream>
#include <conio.h>
#include <time.h>

// Generator liczb losowych
// -------------------------

using namespace std;

int iLiczba;
int iMax;


int main()
{

	cout << "       GENERATOR LICZB LOSOWYCH        " << endl;
	cout << "--------------------------------" << endl;
	cout << endl;


	cout << "Max: ";
	cin >> iMax;

	srand((int)time(NULL));
	cout << "Wylosowana liczba to: ";
	iLiczba = rand() % iMax;

	cout << iLiczba;

	_getch();
	return 0;
}