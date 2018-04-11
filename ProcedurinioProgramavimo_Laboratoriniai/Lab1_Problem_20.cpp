#include <iostream>
#include <vector>
using namespace std;
int Lab1_Problem_20()
{
	short n;
	cin >> n;

	vector <short> var1;
	vector <short> var2;
	vector <short> sum;

	for (int i = 0; i < n; i++) {
		var1.push_back(0);
	}
	var1[0] = 9;
	for (int i = 0; i < n + 1; i++) {
		var2.push_back(9);
	}
	var2[0] = 1;
	var2[1] = 0;
	for (int i = 0; i < n + n; i++) {
		sum.push_back(0);
	}

	//multiply
	short temp, temp2;
	for (int i = 0; i < var2.size(); i++) {
		for (int j = 0; j < var1.size(); j++) {
			temp = var1[j] * var2[i];
			temp2 = 0;
			while (temp > 9) {
				temp = temp - 10;
				temp2++;
			}
			if (temp2 > 0) {
				sum[i + j - 1] = sum[i + j - 1] + temp2;
			}
			sum[i + j] = sum[i + j] + temp;
		}
	}

	//division
	for (int i = n + n - 1; i >= 0; i--) {
		temp = 0;
		if (sum[i] % 2 != 0) {
			sum[i]--;
			sum[i + 1] = sum[i + 1] + 5;
		}
		sum[i] = sum[i] / 2;
	}

	for (int i = 0; i < n + n; i++) {
		cout << sum[i];
	}
	//system("pause");
	return 0;
}