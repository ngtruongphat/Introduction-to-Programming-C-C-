#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	float positivesum[100][100];
	int m, n;
	cin >> m >> n;
	float s = 0;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> positivesum[i][j];
		}
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (positivesum[i][j] > 0)
				s += positivesum[i][j];
		}
	}
	cout << s;
	return 0;
}