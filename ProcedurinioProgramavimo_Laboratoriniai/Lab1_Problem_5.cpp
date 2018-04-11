#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int Lab1_Problem_5()
{
	double a, b, ats;
	cin >> a >> b;
	if (b >= 0) {
		ats = 2 * sin(a) + (cos(b) - sqrt(tan(b)))*pow(log10(a), 5);
		cout << fixed << setprecision(2) << ats << endl;
	}
	//system("pause");
	return 0;
}