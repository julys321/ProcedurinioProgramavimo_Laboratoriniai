#include <iostream>
#include <iomanip>
using namespace std;
int Lab1_Problem_9()
{
	double a,b,ats;
	double pi = 3.14159265359;
	cin >> a >> b;
	if (a < b) {
		ats = pi*((a / 2)*(a / 2));
	}
	else {
		ats = pi*((b / 2)*(b / 2));
	}
	cout << fixed << setprecision(2) << ats << endl;
	//system("pause");
	return 0;
}