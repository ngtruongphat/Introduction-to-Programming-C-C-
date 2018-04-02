#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int a[100][100];
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
	}
	int kata = 0;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			kata = a[i][j];
			if (a[i + 1][j + 1]<0 && a[i + 1][j + 1]>a[i][j])
			{
				kata = a[i + 1][j + 1];
			}
		}
	}
	cout << kata << endl;
	return 0;
}