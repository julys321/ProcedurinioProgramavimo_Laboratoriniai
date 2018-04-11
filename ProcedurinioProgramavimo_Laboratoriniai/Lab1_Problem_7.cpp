#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int Lab1_Problem_7()
{
	double x1, y1, x2, y2, ats;
	cin >> x1 >> y1 >> x2 >> y2;
	ats = sqrt(((y2 - y1)*(y2 - y1)) + ((x2 - x1)*(x2 - x1)));
	cout << fixed << setprecision(2) << ats << endl;
	//system("pause");
	return 0;
}