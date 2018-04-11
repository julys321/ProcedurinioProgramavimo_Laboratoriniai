#include <iostream>
using namespace std;
int Lab1_Problem_14()
{
	int j = 0;
	long long n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum = sum + i;
			j++;
		}
	}
	if (n != 1) {
		sum = sum / j;
	}
	cout << sum << endl;
	//system("pause");
	return 0;
}