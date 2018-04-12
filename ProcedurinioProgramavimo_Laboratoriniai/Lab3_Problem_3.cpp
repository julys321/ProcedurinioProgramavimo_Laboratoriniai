#include <iostream>
#include <string>
using namespace std;
string DecToBin(int a);
int Lab3_Problem_3()
{
	int inputNumber;
	cin >> inputNumber;
	cout << DecToBin(inputNumber) << endl;
	return 0;
}
string DecToBin(int a) {
	if (a == 0)
		return to_string(0);
	int k = 1;
	string numberString;
	while (a >= 2)
	{
		k = a / 2;
		numberString.insert(0, to_string(a%2));
		a = a / 2;
	}
	numberString.insert(0, to_string(k));
	return numberString;
}