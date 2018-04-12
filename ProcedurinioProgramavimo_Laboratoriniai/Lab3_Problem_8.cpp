#include <iostream>
#include <vector>
using namespace std;
void readRow(vector<int> &numberRow, int n);
void sort(vector<int> &numberRow);
void print(vector<int> &numberRow);
int Lab3_Problem_8()
{
	vector<int> numberRow;
	int n;
	cin >> n;
	readRow(numberRow, n);
	cin >> n;
	readRow(numberRow, n);
	sort(numberRow);
	print(numberRow);
	return 0;
}
void readRow(vector<int> &numberRow, int n) {
	int temporaryInt;
	for (int i = 0; i < n; i++)
	{
		cin >> temporaryInt;
		numberRow.push_back(temporaryInt);
	}
}
void sort(vector<int> &vector) {
	int i, j, temporaryInt;
	bool swapped;
	for (i = 0; i < vector.size() - 1; i++) {
		swapped = false;
		for (j = 0; j < vector.size() - i - 1; j++) {
			if (vector[j] > vector[j + 1]) {
				temporaryInt = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = temporaryInt;
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}
void print(vector<int> &numberRow) {
	for (int i = 0; i < numberRow.size(); i++) {
		cout << numberRow[i] << " ";
	}
	cout << endl;
}