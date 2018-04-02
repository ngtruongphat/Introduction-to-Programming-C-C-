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

float Result(float A[100][100], int m, int n)
{
	float t = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			t *= A[i][j];
	t /= n*m;
	return t;
}

int main()
{
	float A[100][100];
	int m, n;
	cin >> m >> n;
	input(A, m, n);
	cout << Result(A, m, n) << endl;
	return 0;
}
