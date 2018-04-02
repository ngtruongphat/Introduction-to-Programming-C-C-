#include "stdafx.h"
#include <iostream>
using namespace std;

void nhap(double a[][100], int m, int n)
{
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
}

double smallest_pos(double a[][100], int m, int n)
{
	double minimum, sub = 0;
	for (int i = 0; i<m; ++i)
		for (int j = 0; j < n; ++j)
		{
			if (a[i][j] > 0)
			{
				++sub;
				if (sub == 1) {
					minimum = a[i][j];
					continue;
				}
				else if (a[i][j] < minimum)
					minimum = a[i][j];
			}
		}
	return minimum;
}

int main()
{
	int m, n;
	double a[100][100];
	cin >> m >> n;
	nhap(a, m, n);
	cout << smallest_pos(a, m, n);
	return 0;
}