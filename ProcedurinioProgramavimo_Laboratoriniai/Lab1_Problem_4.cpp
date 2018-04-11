#include <iostream>
#include <iomanip>
using namespace std;
int Lab1_Problem_4()
{
	double a, b, c, ats;
	cin >> a >> b >> c;
	ats = (b + sqrt((b*b) - (a*c))) / (2 * a);
	cout << fixed << setprecision(3) << ats << endl;
	//system("pause");
	return 0;
}