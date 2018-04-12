#include <iostream>
using namespace std;
void Keisti2(int *ap, int *bp);
int Lab3_Problem_9()
{
	int a, b;
	cin >> a >> b;
	Keisti2(&a, &b);
	cout << a << " " << b << endl;
	return 0;
}
void Keisti2(int *ap, int *bp) {
	int temporaryInt = *ap;
	*ap = *bp;
	*bp = temporaryInt;
}