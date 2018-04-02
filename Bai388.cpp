#include "stdafx.h"
#include<iostream>
using namespace std;
int output(int a[][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << "   ";
		cout << endl;
	}
	return 0;
}
int input(int a[][100], int n, int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	return 0;
}
int ktnt(int a)
{
	int x = 0;
	if (a < 2)
		x = 1;
	if (a == 2)
		x = 0;
	if (a > 2)
		for (int i = 2; i < a / 2; i++)
			if (a%i == 0)
				x = 1;
	return x;
}
void list(int a[][100], int dong, int cot)
{
	int dem[100] = { 0 };
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (ktnt(a[i][j]) == 1)
			{
				dem[i]++;
			}
		}
	}
	int Max = dem[0];
	for (int i = 1; i < dong; i++)
	{
		Max = (Max > dem[i]) ? Max : dem[i];
	}
	for (int i = 0; i < dong; i++)
	{
		if (Max == dem[i])
		{
			cout << i;
		}
	}
}
int main()
{
	int a[100][100];
	int n, m;
	cin >> n >> m;
	input(a, n, m);
	output(a, n, m);
	list(a, n, m);

	return 0;
}