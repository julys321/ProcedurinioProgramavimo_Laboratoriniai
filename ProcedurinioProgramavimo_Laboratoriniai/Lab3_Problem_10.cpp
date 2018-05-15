#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;
int calcSmallest(vector<int>* vector);
int calcHighest(vector<int>* vector);
double calcAverage(vector<int>* vector);
int Lab3_Problem_10()
{
	ifstream in("seka.txt");
	if (!in || in.peek() == EOF) {
		cout << "Klaida nuskaitant duomenis";
		return 0;
	}
	else {
		int n;
		in >> n;
		vector<int> vector(n);
		for (int i = 0; i < n; i++) {
			in >> vector[i];
		}
		in.close();

		ofstream out("seka_rez.txt");
		out << calcSmallest(&vector) << " " << calcHighest(&vector) << " ";
		out << fixed << setprecision(2) << calcAverage(&vector);
		out.close();
		return 0;
	}
}
int calcSmallest(vector<int>* vector) {
	int smallest;
	smallest = (*vector)[0];
	for each (int i in (*vector)) {
		if (i < smallest) {
			smallest = i;
		}
	}
	return smallest;
}
int calcHighest(vector<int>* vector) {
	int highest;
	highest = (*vector)[0];
	for each (int i in (*vector)) {
		if (highest < i) {
			highest = i;
		}
	}
	return highest;
}
double calcAverage(vector<int>* vector) {
	double average = 0;
	for each (int i in (*vector)) {
		average += i;
	}
	average /= (*vector).size();
	return average;
}