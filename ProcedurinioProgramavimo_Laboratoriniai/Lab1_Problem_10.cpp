#include <iostream>
#include <iomanip>
using namespace std;
int Lab1_Problem_10()
{
	double p, h, r, ats;
	double pi = 3.14159265359;
	cin >> p >> h >> r;
	ats = pi*(r*r)*h;
	if (p == 2)
		ats /= 3;
	cout << fixed << setprecision(2) << ats << endl;
	//system("pause");
	return 0;
}