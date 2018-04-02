#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int a[100][100], b[100][100];
int max3(int n, int m, int i, int j)
{
	int max2 = a[i][j];
	for (int k = 0; k < n; k++)
		max2 = (max2 < a[i][k]) ? a[i][k] : max2;
	for (int k = 0; k < m; k++)
		max2 = (max2 < a[k][j]) ? a[k][j] : max2;
	return max2;
}

void Matrix_b(int n, int m)
{
	for (int i = 0; i <n; i++)
		for (int j = 0; j<m; j++)
			b[i][j] = max3(n, m, i, j);
}
int main()
{
	int n, m;
	cout << "Enter n rows and m columns : \n";
	cin >> n >> m;
	for (int i = 0; i<n; ++i)
		for (int j = 0; j<m; ++j)
			cin >> a[i][j];
	Matrix_b(n, m);
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
			cout << b[i][j] << "  ";
		cout << "\n";
	}
	return 0;
}
