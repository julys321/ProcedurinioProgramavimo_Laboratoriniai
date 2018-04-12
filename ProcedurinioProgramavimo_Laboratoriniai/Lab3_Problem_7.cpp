#include <iostream>
#include <vector>
using namespace std;
void swap(int *a, int *b);
void NuskaitytiSeka(vector<int> &numberRow);
void SurikiuotiElementus(vector<int> &numberRow);
void SpausdintiRezultatus(vector<int> &numberRow);
int Lab3_Problem_7()
{
	vector<int> numberRow;
	NuskaitytiSeka(numberRow);
	SurikiuotiElementus(numberRow);
	SpausdintiRezultatus(numberRow);
	return 0;
}
void NuskaitytiSeka(vector<int> &numberRow) {
	int n, temporaryInt;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temporaryInt;
		numberRow.push_back(temporaryInt);
	}
}
void SurikiuotiElementus(vector<int> &vector) {
	int i, j;
	bool swapped;
	for (i = 0; i < vector.size() - 1; i++) {
		swapped = false;
		for (j = 0; j < vector.size() - i - 1; j++) {
			if (vector[j] < vector[j + 1]) {
				swap(&vector[j], &vector[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void SpausdintiRezultatus(vector<int> &numberRow) {
	for (int i = 0; i < numberRow.size(); i++) {
		cout << numberRow[i] << " ";
	}
	cout << endl;
}