#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int Lab1_Problem_19()
{
	int a, b, c, d, temp;
	vector <int> x;
	cin >> a >> b >> c >> d;
	for (int i = -1000; i <= 1000; i++) {
		temp = (a*pow(i, 3)) + (b*pow(i, 2)) + (c*i) + d;
		if (temp == 0)
			x.push_back(i);
	}
	for (int i = 0; i < x.size(); i++) {
		cout << x[i];
		if (i != x.size() - 1)
			cout << "_";
	}
	cout << endl;
	//system("pause");
	return 0;
}