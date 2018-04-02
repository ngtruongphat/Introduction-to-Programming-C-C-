#include "stdafx.h"
#include <iostream>
using namespace std;
void input(int a[][50], int n, int m);
void row_in_array(int a[][50], int m, int i, int b[]);
void put_array(int a[][50], int b[], int n, int m);
void arrange(int b[], int m);

int main()
{
	int n, m, a[50][50], b[50];
	cin >> n >> m;
	input(a, n, m);
	put_array(a, b, n, m);
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
void row_in_array(int a[][50], int m, int i, int b[])
{
	for (int j = 0; j < m; j++)
		b[j] = a[i][j];
}
void arrange(int b[], int m)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (b[j] > b[i])
			{
				int x = b[i];
				b[i] = b[j];
				b[j] = x;
			}
}
void put_array(int a[][50], int b[], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		row_in_array(a, m, i, b);
		arrange(b, m);
		for (int j = 0; j < m; j++)
		{
			a[i][j] = b[j];
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}