#include "stdafx.h"
#include <iostream>
using namespace std;
void input(int a[][50], int n, int m);
void check_even(int a[][50], int n, int m);

int main()
{
	int a[50][50], n, m;
	cin >> n >> m;
	input(a, n, m);
	check_even(a, n, m);
	return 0;
}
void input(int a[][50], int n, int m)
{

	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
		{
			cout << "a[" << i + 1 << ", " << j + 1 << "] = ";
			cin >> a[i][j];
		}
}
void check_even(int a[][50], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			if (a[i][j] % 2 == 0)
			{
				for (int u = 0; u < m; u++)
					cout << a[i][u] << "    ";
			}
	}
}