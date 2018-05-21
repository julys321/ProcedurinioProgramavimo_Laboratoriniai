#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

int Band_Problem_1() {//PATHS for 200pts
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string line;
	getline(cin, line);
	stringstream ss;
	ss.str(line);
	vector<int> numbers;
	int x;
	while (ss >> x) numbers.push_back(x);
	// Your code goes here
	int result = 0;
	cout << result;
	return 0;
}