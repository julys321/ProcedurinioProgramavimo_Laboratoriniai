#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
void removeFrontZeros(vector<int> &a);
int compare(vector<int> &a, vector<int> &b);
vector<int> subtract(vector<int> a, vector<int> b);
vector<int> addition(std::vector<int> max, std::vector<int> min);
int Lab3_Problem_19()
{
	vector<int> a;
	vector<int> b;
	char temp = '0';
	vector<char> tempCharArray;
	//ifstream in("19.txt");
	//cin.ignore(1);
	while (true) {
		//in.get(temp);
		cin.get(temp);
		if (temp == '\n' || temp == ' ')
			break;
		a.push_back(temp - '0');
	}
	temp = '0';
	while (true) {
		//in.get(temp);
		cin.get(temp);
		if (temp == '\n' || temp == ' ')
			break;
		b.push_back(temp - '0');
	}
	//in.close();
	if (compare(a, b) < 1) {
		a=subtract(a, b);
	}
	else {
		a=addition(a, b);
	}
	removeFrontZeros(a);
	for (int i : a) {
		cout << i;
	}

	return 0;
}
int compare(vector<int> &a, vector<int> &b) {
	if (a.size() > b.size())
		return -1;
	else if (a.size() < b.size())
		return 1;
	else {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] > b[i])
				return -1;
			if (a[i] < b[i])
				return 1;
		}
		return 0;
	}
}
vector<int> subtract(vector<int> a, vector<int> b) {
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	vector<int> c;
	int temp;

	for (int i = 0; i < b.size(); i++) {
		temp = a[i] - b[i];
		if (temp < 0) {
			a[i - 1]--;
			a[i] += 10;
		}
		c.push_back(a[i] - b[i]);
	}
	//reverse(c.begin(), c.end());
	return c;
}
vector<int> addition(vector<int> max, vector<int> min) {
	if (max.size() < min.size()) {
		max.swap(min);
	}
	vector<int> sum;
	int rest = 0;

	for (int i = 0; i < min.size(); i++) {
		int c = min[i] + max[i] + rest;
		sum.push_back(c % 10);
		rest = c / 10;
	}

	for (int i = min.size(); i < max.size(); i++) {
		int c = max[i] + rest;
		sum.push_back(c % 10);
		rest = c / 10;
	}
	while (rest > 0) {
		sum.push_back(rest % 10);
		rest /= 10;
	}
	reverse(sum.begin(), sum.end());
	return sum;
}
void removeFrontZeros(vector<int> &a) {
	while (a[0] == 0 && a.size() > 1) {
		a.erase(a.begin());
	}
}