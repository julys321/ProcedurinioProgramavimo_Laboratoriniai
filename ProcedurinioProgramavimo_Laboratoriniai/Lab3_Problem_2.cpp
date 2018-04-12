#include <iostream>
using namespace std;
int Suma2(int a, int b);
int Lab3_Problem_2()
{
	int suma = 0;
	int inputArray[4];
	for (int i = 0; i < 4; i++) {
		cin >> inputArray[i];
	}
	for (int i = 0; i < 4; i++) {
		suma=Suma2(suma,inputArray[i]);
	}
	cout << suma << endl;
	return 0;
}
int Suma2(int a, int b) {
	return (a + b);
}