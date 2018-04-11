#include <iostream>
using namespace std;
int Lab1_Problem_12()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c || a == b && a>c || a>b && a == c || a == b && a == c) {
		cout << a << endl;
	}
	if (b > a && b > c || b>a && b == c) {
		cout << b << endl;
	}
	if (c > a && c > b) {
		cout << c << endl;
	}
	//system("pause");
	return 0;
}