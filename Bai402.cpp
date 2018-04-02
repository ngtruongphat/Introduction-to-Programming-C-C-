#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int n, m, a[100][100], b[100][100];
void array_rotate()
{
	int k;
	for (int i = 0; i<m; i++)
	{
		k = n - 1;
		for (int j = 0; j<n; j++)
		{
			b[i][j] = a[k][i];
			k--;
		}
	}
}

int main()
{
	cout << "Enter n row and m column : \n";
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
	array_rotate();
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << b[i][j] << "  ";
		cout << "\n";
	}
	return 0;
}