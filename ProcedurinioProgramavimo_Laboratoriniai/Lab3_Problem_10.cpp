#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
void sort2(vector<int> *vector);
int Lab3_Problem_10()
{
	ifstream in("seka.txt");
	cout << in.rdstate() << endl;
	if (!in || in.peek()==EOF) {
		cout << "Klaida nuskaitant duomenis";
		return 0;
	}
	int n;
	in >> n;
	vector<int> vector(n);
	for (int i = 0; i < n;i++){
		in >> vector[i];
		cout << vector[i] << " ";
	}
	in.close();
	return 0;
}
void sort2(vector<int> &vectorp) {
	int i, j, temporaryInt;
	bool swapped;
	for (i = 0; i < vectorp.size() - 1; i++) {
		swapped = false;
		for (j = 0; j < vectorp.size() - i - 1; j++) {
			if (vectorp[j] > vectorp[j + 1]) {
				temporaryInt = vectorp[j];
				vectorp[j] = vectorp[j + 1];
				vectorp[j + 1] = temporaryInt;
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}