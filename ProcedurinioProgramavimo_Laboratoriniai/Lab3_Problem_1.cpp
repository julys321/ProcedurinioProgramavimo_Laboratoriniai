#include <iostream>
using namespace std;
int Suma(int a, int b);
int Lab3_Problem_1()
{
	int a, b;
	cin >> a >> b;
	cout << Suma(a, b) << endl;
	return 0;
}
int Suma(int a, int b) {
	return (a+b);
}