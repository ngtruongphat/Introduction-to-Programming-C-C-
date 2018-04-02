#include "stdafx.h"
#include <iostream>
using namespace std;

void input(double a[][100], int m, int n)
{
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
}

void output(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; ++j)
		{
			cout << a[i][j];
		}
}

double trungbinhcong(double a[][100], int m, int n)
{
	int dem = 0;
	double s = 0, tb;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (a[i][j] > 0) {
				s = s + a[i][j];
				++dem;
			}
	tb = (double)s / dem;
	return tb;
}

int main()
{
	int m, n;
	double a[100][100];
	cin >> m >> n;
	input(a, m, n);
	cout << trungbinhcong(a, m, n);
	return 0;
}
