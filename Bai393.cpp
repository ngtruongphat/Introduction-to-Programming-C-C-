#include "stdafx.h"
#include <iostream>
using namespace std;
void reverse(float& a, float& b)
{
	float t = a;
	a = b;
	b = t;
}
void result(float a[][100], int m, int n, int q, int e)
{
	for (int i = 0; i < m; i++)
	{
		reverse(a[i][q], a[i][e]);
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
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
	int q, e;
	cin >> q >> e;
	result(a, m, n, q, e);
	return 0;
}