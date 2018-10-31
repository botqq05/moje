#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
	const int N = 5;
	int i, tab1[N], tab2[N], tab3[N];
	for (i = 0; i < N; i++) {
		cout << "podaj tab1[" << 1 << "]:";
		cin >> tab1[i];
	}
	for (i = 0; i < N; i++) {
		tab2[i] = tab1[i];
		tab3[i] = tab1[i];
	}
	cout << "tab2: \n";
	for (i = 0; i < N; i++) {
		cout << tab2[i] << "i";
	}
	cout << "\ntab3: \n";
	for (i = 0; i < N; i++) {
		cout << tab3[i] << "i";
	}
	cout << endl;
	system("pasue");
	return 0;
}