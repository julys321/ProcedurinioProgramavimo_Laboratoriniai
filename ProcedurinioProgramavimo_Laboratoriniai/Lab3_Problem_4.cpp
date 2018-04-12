#include <iostream>
using namespace std;
void Keisti(int &a, int &b);
int Lab3_Problem_4()
{
	int a, b;
	cin >> a >> b;
	Keisti(a, b);
	cout << a << " " << b << endl;
	return 0;
}
void Keisti(int &a, int &b) {
	int temporaryInt = a;
	a = b;
	b = temporaryInt;
}