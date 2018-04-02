#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

void input(int a[][100], int m, int n)
{
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
}

void abs_equal(int a[][100], int b[][100], int m, int n)
{
	for (int i = 0; i<m; ++i)
		for (int j = 0; j < n; ++j) {
			b[i][j] = abs(a[i][j]);
		}
}

void output(int b[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{

	int m, n;
	int a[100][100], b[100][100];
	cin >> m >> n;
	input(a, m, n);
	abs_equal(a, b, m, n);
	output(b, m, n);
	return 0;
}