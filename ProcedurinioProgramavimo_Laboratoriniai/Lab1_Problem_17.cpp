#include <iostream>
using namespace std;
int Lab1_Problem_17()
{
	int n;
	bool no = true;
	cin >> n;
	for (int i = 2; i < n && no != false; i++) {
		if (n%i == 0)
			no = false;
	}
	if (no == false || n == 0 || n == 1) {
		cout << "NE" << endl;
	}
	else if (no == true) {
		cout << "TAIP" << endl;
	}
	//system("pause");
	return 0;
}