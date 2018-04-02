#include "stdafx.h"
#include<iostream>
using namespace std;
int output(float a[][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << "   ";
		cout << endl;
	}
	return 0;
}
int input(float a[][100], int n, int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	return 0;
}
int countso(float a[][100], int x, int cot)
{
	int count = 0;
	for (int j = 0; j < cot; j++)
	{
		if (a[x][j] > 0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	float a[100][100];
	int n, m;
	cin >> n >> m;
	input(a, n, m);
	output(a, n, m);

	int rowcount;
	do {
		cin >> rowcount;
	} while (rowcount < 0 || rowcount > n - 1);
	cout << countso(a, rowcount, m);
	system("pause");
	return 0;
}