#include "stdafx.h"
#include<iostream>
using namespace std;

void Input(int A[100][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> A[i][j];
		cout << endl;
	}
}

int Result(int A[100][100], int m, int n, int column)
{
	for (int i = 0; i < m - 1; i++)
	{
		if (A[i][column] <= A[i + 1][column])
			return false;
	}
	return true;
}

int main()
{
	int A[100][100], m, n, column;
	cin >> column >> m >> n;
	cout << endl;
	Input(A, m, n);
	if (Result(A, m, n, column))
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}

