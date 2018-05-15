#include <fstream>
using namespace std;
int fibonaci(int n);
int Lab3_Problem_11()
{
	int n;
	ifstream in("11.in");
	in >> n;
	in.close();
	ofstream out("11.out");
	out << fibonaci(n);
	out.close();
	return 0;
}
int fibonaci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	else
		return fibonaci(n - 1) + fibonaci(n - 2);
}