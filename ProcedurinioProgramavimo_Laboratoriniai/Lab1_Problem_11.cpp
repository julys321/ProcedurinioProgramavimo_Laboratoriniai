#include <iostream>
#include <cmath>
using namespace std;
int Lab1_Problem_11()
{
	int a, b, c, x1, x2;
	double dis;
	cin >> a >> b >> c;
	dis = pow(b, 2) - (4 * a*c);
	if (dis < 0) {
		cout << "NO" << endl;
	}
	else if (dis == 0) {
		x1 = (-1 * b) / (2 * a);
		cout << x1 << endl;
	}
	else {
		x1 = ((-1 * b) - sqrt(dis)) / (2 * a);
		x2 = ((-1 * b) + sqrt(dis)) / (2 * a);
		cout << x1 << "_" << x2 << endl;
	}
	//system("pause");
	return 0;
}