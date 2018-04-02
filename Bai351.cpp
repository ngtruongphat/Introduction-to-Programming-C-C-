#include "stdafx.h"
#include <iostream>
using namespace std;

void input(int a[][100], int m, int n)
{
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
}

void check_pos(int a[][100], int m, int n)
{
	int check = 0;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a[i][j] < 0)
			{
				cout << "NO";
				check = 1;
				break;
			}
			if (j == n - 1)
				check = 2;
		}
		if (check == 1)
			break;
	}
	if (check == 2)
		cout << "OK";
}

int main()
{
	int m, n;
	int a[100][100];
	cin >> m >> n;
	input(a, m, n);
	check_pos(a, m, n);
	return 0;
}