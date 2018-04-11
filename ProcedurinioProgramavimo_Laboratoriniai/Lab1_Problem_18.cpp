#include <iostream>
using namespace std;
int Lab1_Problem_18()
{
	//label:
	int n, ats = 2, temp;
	cin >> n;
	if (n == 0)
		ats = 1;
	else {
		for (int i = 0; i < n - 1; i++) {
			ats = ats * 2;
			while (ats > 1000) {
				ats = ats - 1000;
			}
		}
		int lengthCount = 0;
		temp = ats;
		for (; temp != 0; temp /= 10, lengthCount++);
		//cout << lengthCount << endl;
		if (lengthCount == 2 && n > 6)
			cout << "0";
		else if (lengthCount == 1 && n > 6)
			cout << "00";
	}
	cout << ats;
	cout << endl;
	//system("pause");
	//goto label;
	return 0;
}