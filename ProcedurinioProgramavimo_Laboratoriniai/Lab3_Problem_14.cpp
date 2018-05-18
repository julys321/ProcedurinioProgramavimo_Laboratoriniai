#include <fstream>
using namespace std;
long long F(int n);
int Lab3_Problem_14()
{
	int n;
	ifstream in("14.in");
	in >> n;
	in.close();
	ofstream out("14.txt");
	out << F(n);
	out.close();
	return 0;
}
long long F(int n) {
	long long F[81];
	F[0] = 0;
	F[1] = 1;
	for (int i = 2; i <= n; i++) F[i] = F[i - 1] + F[i - 2];
	return F[n];
}
