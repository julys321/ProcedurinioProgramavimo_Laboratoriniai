#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
void removeLysve(vector<vector<char>> &matrix, int i, int j);
int Lab3_Problem_18()
{

	int n, m;
	//ifstream in("18.txt");
	//in >> n >> m;
	cin >> n >> m;
	vector<vector<char>> matrix(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//in >> matrix[i][j];
			cin >> matrix[i][j];
		}
	}
	//in.close();
	//work
	int vysliuN = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == '#') {
				vysliuN++;
				removeLysve(matrix, i, j);
				//gyvas darbo sekimas
				//for (int iout = 0; iout < n; iout++) {
				//	cout << endl;
				//	for (int jout = 0; jout < m; jout++) {
				//		cout << matrix[iout][jout] << " ";
				//	}
				//}
				//cout << endl;
				//
			}
		}
	}
	cout << vysliuN;
	return 0;
}
void removeLysve(vector<vector<char>> &matrix, int i, int j) {
	matrix[i][j] = '.';
	if ((i - 1) >= 0 && matrix[i - 1][j] == '#') {
		removeLysve(matrix, i - 1, j);
	}
	if ((j + 1) < matrix[i].size() && matrix[i][j + 1] == '#') {
		removeLysve(matrix, i, j + 1);
	}
	if ((i + 1) < matrix.size() && matrix[i + 1][j] == '#') {
		removeLysve(matrix, i + 1, j);
	}
	if ((j - 1) >= 0 && matrix[i][j - 1] == '#') {
		removeLysve(matrix, i, j - 1);
	}
}