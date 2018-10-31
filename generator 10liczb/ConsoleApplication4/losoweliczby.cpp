#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int k, r;
	srand(time(NULL));
	cout << "RANMAX:" << RAND_MAX << endl;
	for (k = 1; k <= 20; k++) {
		r = rand() % 11;
		cout << r << endl;
	}
	system("pause");
		return 0;
}
