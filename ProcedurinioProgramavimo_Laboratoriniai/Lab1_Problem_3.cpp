#include <iostream>
#include <iomanip>
using namespace std;
int Lab1_Problem_3()
{
	double a, b, ats;
	cin >> a >> b;
	ats = ((b * 100) / a) - 100;
	cout << fixed << setprecision(2) << ats << endl;
	//system("pause");
	return 0;
}