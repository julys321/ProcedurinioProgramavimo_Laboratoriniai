#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int Lab1_Problem_8()
{
	double x1, y1, x2, y2, x3, y3, ats, a, b, c;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	ats = 0.5*abs((x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1));
	cout << fixed << setprecision(1) << ats << endl;
	//system("pause");
	return 0;
}