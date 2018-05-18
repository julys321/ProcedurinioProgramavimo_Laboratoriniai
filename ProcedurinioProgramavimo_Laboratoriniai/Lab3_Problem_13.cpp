#include <fstream>
using namespace std;
long long findDvigubasFactorialas(int n);
int Lab3_Problem_13()
{
	int n;
	ifstream in("13.txt");
	in >> n;
	in.close();
	ofstream out("13.out");
	out << findDvigubasFactorialas(n);
	out.close();
	return 0;
}
long long findDvigubasFactorialas(int n) {
	if (n <= 0)
		return 1;
	else
		return  n * findDvigubasFactorialas(n - 2);
}