#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int compare(vector<short> &a, vector<short> &b);
void subtract(vector<short> &a, vector<short> &b);
void add(vector<short> &a, vector<short> &b);
int Lab3_Problem_19()
{
	vector<short> a;
	vector<short> b;
	char temp = '0';
	vector<char> tempCharArray;
	//ifstream in("19.txt");
	cin.ignore(1);
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
	if (compare(a, b) == -1) {
		subtract(a, b);
	}
	else {
		add(a, b);
	}
	for (short i : a) {
		cout << i;
	}
	
	return 0;
}
int compare(vector<short> &a, vector<short> &b) {
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
void subtract(vector<short> &a, vector<short> &b) {
	vector<short> c;
	short temp;
	for (int i = 0; i < (b.size() - a.size()); i++) {
		b.insert(b.begin(), 0);
	}
	for (int i = b.size()-1; i >= 0; i--) {
		temp = a[i] - b[i];
		if (temp < 0) {
			a[i - 1]--;
			a[i] += 10;
		}
		c.push_back(a[i] - b[i]);
	}
	reverse(c.begin(), c.end());
	a = c;
}
void add(vector<short> &a, vector<short> &b) {
	vector<short> c;
	short temp = a.size() - b.size();
	for (int i = 0; i < (a.size() - b.size()); i++) {
		a.insert(a.begin(), 0);
	}
	for (int i = b.size() - 1; i >= 0; i--) {
		temp = a[i] + b[i];
		if (temp > 10) {
			a[i - 1]++;
			temp -= 10;
		}
		c.push_back(temp);
	}
	reverse(c.begin(), c.end());
	a = c;
}