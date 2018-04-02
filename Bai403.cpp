#include "stdafx.h"
#include<iostream>
using namespace std;

void input(int A[100][100], int m, int n)
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

void rotate_90(int A[100][100], int m, int n)
{
	int B[10000];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++, k++)
			B[k] = A[i][j];
	k = 0;
	for (int j = n - 1; j >= 0; j--)
		for (int i = 0; i < m; i++, k++)
			A[i][j] = B[k];
}

void result(int A[100][100], int m, int n)
{
	rotate_90(A, m, n);
	rotate_90(A, m, n);
}

int main()
{
	int A[100][100], m, n;
	cin >> m >> n;
	input(A, m, n);
	result(A, m, n);
	output(A, m, n);
	return 0;
}