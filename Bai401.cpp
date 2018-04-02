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

void output(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void delete1column(int a[][100], int m, int n)
{
	int removedcolumn;
	cout << "Column needed to be removed : ";
	cin >> removedcolumn;
	for (int i = 0; i<m; ++i)
		for (int j = removedcolumn - 1; j < n - 1; ++j) {
			a[i][j] = a[i][j + 1];
		}
}

int main()
{
	int m, n;
	int a[100][100];
	cin >> m >> n;
	input(a, m, n);
	delete1column(a, m, n);
	output(a, m, n);
	return 0;
}