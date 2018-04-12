#include <iostream>
#include <cmath>
using namespace std;
bool IsPrime(int a);
int Lab3_Problem_6()
{
	int inputNumber;
	cin >> inputNumber;
	cout << IsPrime(inputNumber) << endl;
	return 0;
}
bool IsPrime(int a) {
	if (a == 0 || a == 1)
		return false;
	for (int i = 2; i <= sqrt(a); i++)
	{
		if ((a % i) == 0)
		{
			return false;
		}
	}
	return true;
}