#include <iostream>
#include <vector>
using namespace std;
int Lab1_Problem_15()
{
	long long n, m, sum = 0;
	cin >> n >> m;
	vector <long long> vec1;
	vector <long long> vec2;
	vec1.push_back(n);
	vec2.push_back(m);
	for (int i = 1; n > 1; i++) {
		vec1.push_back(n / 2);
		n = n / 2;
		vec2.push_back(vec2[i - 1] * 2);
	}
	for (int i = 0; i < vec1.size(); i++) {
		if (vec1[i] % 2 != 0) {
			sum = sum + vec2[i];
		}
	}
	cout << sum << endl;
	//system("pause");
	return 0;
}