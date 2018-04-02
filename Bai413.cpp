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
void reverse(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
void arrange(int a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot - 1; j++)
		{
			for (int k = j + 1; k < cot; k++)
			{
				if (i % 2 == 0)
				{
					if (a[i][j] > a[i][k])
					{
						reverse(a[i][j], a[i][k]);
					}
				}
				else
				{
					if (a[i][j] < a[i][k])
					{
						reverse(a[i][j], a[i][k]);
					}
				}
			}
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
	arrange(a, n, m);
	output(a, n, m);
	system("pause");
	return 0;
}