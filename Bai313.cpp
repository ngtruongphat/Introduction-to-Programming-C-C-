#include "stdafx.h"
#include<iostream>
using namespace std;
int output(int a[][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << ""   "";
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
int main()
{
	int a[100][100];
	int n, m;
	cin >> n >> m;
	input(a, n, m);
	output(a, n, m);
	system("pause");
	return 0;
}