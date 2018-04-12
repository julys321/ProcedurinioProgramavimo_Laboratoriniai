#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int Lab3_Problem_5()
{
	double xCordinates[4];
	double yCordinates[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> xCordinates[i] >> yCordinates[i];
	}
	double edge[3];
	edge[0] = sqrt(pow((xCordinates[0] - xCordinates[1]), 2) + pow((yCordinates[0] - yCordinates[1]),2));
	edge[1] = sqrt(pow((xCordinates[0] - xCordinates[2]), 2) + pow((yCordinates[0] - yCordinates[2]), 2));
	edge[2] = sqrt(pow((xCordinates[0] - xCordinates[3]), 2) + pow((yCordinates[0] - yCordinates[3]), 2));
	double area, perimmeter;
	if (edge[0] >= edge[1] && edge[0] >= edge[2]) {
		area = edge[1] * edge[2];
		perimmeter = edge[1] * 2 + edge[2] * 2;
	}
	else if (edge[1] >= edge[0] && edge[1] >= edge[2]) {
		area = edge[0] * edge[2];
		perimmeter = edge[0] * 2 + edge[2] * 2;
	}
	else if (edge[2] >= edge[0] && edge[2] >= edge[1]) {
		area = edge[0] * edge[1];
		perimmeter = edge[0] * 2 + edge[1] * 2;
	}
	cout << fixed << setprecision(5) << area << endl;
	cout << fixed << setprecision(5) << perimmeter << endl;
	return 0;
}