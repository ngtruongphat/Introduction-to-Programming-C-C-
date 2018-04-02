#include "stdafx.h"
#include <iostream>
using namespace std;
float max(float a, float b)
{
	if (a > b)
		return a;
	else return b;
}
float Result(float a[][100], int m, int n)
{
	float k = -999;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			k = max(k, a[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == k)
				a[i][j] = -999;
		}
	}
	float t = -999;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			t = max(t, a[i][j]);
		}
	}
	return t;
}
int main()
{
	float a[100][100];
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cout << Result(a, m, n);
	return 0;
}
