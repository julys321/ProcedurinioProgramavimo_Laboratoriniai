#include <iostream>//Problem 1. 16 bandymas:1
using namespace std;
long long power(long long n, long long m);
int Lab1_Problem_16()
{
	long long n, m, sum = 0;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		sum = sum + power(n, i);
	}
	if (sum<power(10, 16))
		cout << sum << endl;
	//system("pause");
	return 0;
}
long long power(long long n, long long m) {
	long long a = n;
	for (int i = 0; i < m - 1; i++) {
		a = a*n;
	}
	return a;
}