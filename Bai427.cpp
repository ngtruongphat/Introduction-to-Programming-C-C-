#include "stdafx.h"
#include<iostream>
using namespace std;

void input(float A[100][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> A[i][j];
		cout << endl;
	}
}

void output(int A[100][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << A[i][j] << '\t';
		cout << endl;
	}
}

void result(float A[100][100], int B[100][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			int s = 0;
			if (i - 1 >= 0 && j - 1 >= 0 && A[i - 1][j - 1] > 0)
				s++;
			if (i - 1 >= 0 && A[i - 1][j] > 0)
				s++;
			if (i - 1 >= 0 && j + 1 < n && A[i - 1][j + 1] > 0)
				s++;
			if (j - 1 >= 0 && A[i][j - 1] > 0)
				s++;
			if (j + 1 < n && A[i][j + 1] > 0)
				s++;
			if (i + 1 < m && j - 1 >= 0 && A[i + 1][j - 1] > 0)
				s++;
			if (i + 1 < m && A[i + 1][j] > 0)
				s++;
			if (i + 1 < m && j + 1 < n && A[i + 1][j + 1])
				s++;
			B[i][j] = s;
		}
}

int main()
{
	float A[100][100];
	int m, n, B[100][100];
	cin >> m >> n;
	input(A, m, n);
	result(A, B, m, n);
	output(B, m, n);
	return 0;
}
