#include <iostream>
#include <vector>
using namespace std;
int Lab3_Problem_16()
{
	int a, n;
	cin >> a >> n;
	vector<int> memory;
	memory.push_back(a);
	for (int i = 1; i < n; i++) {
		memory.push_back(memory[i - 1] * a);
	}
	cout << memory[n - 1];
	return 0;
}