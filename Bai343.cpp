#include "stdafx.h"
#include <iostream>
using namespace std;
bool check(float a[][100], int m, int n, int i, int j)
{
	int t = false;
	if (i*j == 0)
	{
		if (i == 0 && j == 0)
		{
			if (a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j])
				t = true;
			if (a[i][j] < a[i][j + 1] && a[i][j] < a[i + 1][j])
				t = true;
		}
		else
		{
			if (!i)
			{
				if (a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1] && a[i][j] > a[i + 1][j])
					t = true;
				if (a[i][j] < a[i][j + 1] && a[i][j] < a[i][j - 1] && a[i][j] < a[i + 1][j])
					t = true;
			}
			if (!j)
			{
				if (a[i][j] > a[i][j + 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j])
					t = true;
				if (a[i][j] < a[i][j + 1] && a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j])
					t = true;
			}
		}
	}
	else
	{
		if (i == m - 1 || j == n - 1)
		{
			if (i == m - 1 && j == n - 1)
			{
				if (a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j])
					t = true;
				if (a[i][j] < a[i][j - 1] && a[i][j] < a[i - 1][j])
					t = true;
			}
			else
			{
				if (i == m - 1)
				{
					if (a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j])
						t = true;
					if (a[i][j] < a[i][j + 1] && a[i][j] < a[i][j - 1] && a[i][j] < a[i - 1][j])
						t = true;
				}
				if (j == n - 1)
				{
					if (a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j])
						t = true;
					if (a[i][j] < a[i][j - 1] && a[i][j] < a[i - 1][j] && a[i][j]< a[i + 1][j])
						t = true;
				}
			}
		}
		else
		{
			if (a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j])
				t = true;
			if (a[i][j] < a[i][j + 1] && a[i][j] < a[i][j - 1] && a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j])
				t = true;
		}
	}
	if (i == m - 1 && j == 0)
	{
		if (a[i][j] > a[i][j + 1] && a[i][j] > a[i - 1][j])
			t = true;
		if (a[i][j] < a[i][j + 1] && a[i][j] < a[i - 1][j])
			t = true;
	}
	if (i == 0 && j == n - 1)
	{
		if (a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1])
			t = true;
		if (a[i][j] < a[i + 1][j] && a[i][j] < a[i][j - 1])
			t = true;
	}
	return t;
}
float result(float a[][100], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (check(a, m, n, i, j))
				s++;
	}
	return s;
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
	cout << result(a, m, n);
	return 0;
}

