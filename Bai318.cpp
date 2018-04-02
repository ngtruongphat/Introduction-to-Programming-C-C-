
#include "stdafx.h"
#include <iostream>
using namespace std;
float result(float a[][100], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				s += a[i][j];
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


