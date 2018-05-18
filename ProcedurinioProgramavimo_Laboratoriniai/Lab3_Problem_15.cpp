#include <fstream>
#include <vector>
using namespace std;
void rotateMatrix(vector<vector<int>> &matrix);
int Lab3_Problem_15()
{

	int n, k;
	ifstream in("15.txt");
	in >> n >> k;
	vector<vector<int>> matrix(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			in >> matrix[i][j];
		}
	}
	in.close();
	while (k >= 4) {
		k = k - 4;
	}
	for (int i = 0; i < k; i++) {
		rotateMatrix(matrix);
	}
	ofstream out("15");
	for (int i = 0; i < n; i++) {
		out << endl;
		for (int j = 0; j < n; j++) {
			out << matrix[i][j] <<" ";
		}
	}
	out.close();
	return 0;
}
void rotateMatrix(vector<vector<int>> &matrix) {
	vector<vector<int>> tempMatrix(matrix.size(), vector<int>(matrix.size()));
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix.size(); j++) {
			tempMatrix[i][j] = matrix[matrix.size() - 1 - j][i];
		}
	}
	matrix = tempMatrix;
}
