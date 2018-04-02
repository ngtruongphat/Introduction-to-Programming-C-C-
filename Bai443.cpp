#include "stdafx.h"
#include <iostream>
using namespace std;
float max(float a, float b)
{
	if (a > b)
		return a;
	else return b;
}
float result(float a[][100], int  n)
{
	float t = -999;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			t = max(t, a[i][j]);
	}
	return t;
}
int main()
{
	float a[100][100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cout << result(a, n);
	return 0;
}
