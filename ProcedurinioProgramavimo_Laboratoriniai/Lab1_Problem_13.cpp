#include <iostream>
using namespace std;
int Lab1_Problem_13()
{
	int a, n;
	long long sum = 0;
	cin >> a >> n;
	for (int i = a; i <= n; i++) {
		sum = sum + i;
	}
	cout << sum << endl;
	//system("pause");
	return 0;
}