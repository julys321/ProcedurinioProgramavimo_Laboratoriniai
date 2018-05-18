#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
void rotateRow(vector<char> &row, int i);
int Lab3_Problem_12()
{
	char temp;
	vector<char> skc;
	ifstream in("input.txt");
	for (int i = 0; in >> temp; i++) {
		skc.push_back(temp);
	}
	in.close();
	reverse(skc.begin(),skc.end());
	rotateRow(skc, skc.size());
	ofstream out("o.txt");
	for (char i:skc) {
		out << i;
	}
	out.close();
	return 0;
}
void rotateRow(vector<char> &row, int i) {
	if (i > 1) {
		i--;
		row.insert(row.begin() + i, '\n');
		rotateRow(row, i);
	}
}