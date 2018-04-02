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

int CountNum(int a, int b)
{
	int s = 0;
	for (int t = a; t; t /= 10)
		if (t % 10 == b)
			s++;
	return s;
}

int Result(int A[100][100], int m, int n)
{
	int maxcount = 0, maxnum = 0, a = 0;
	for (; a < 10; a++)
	{
		int s = 0;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				s += CountNum(A[i][j], a);
		if (maxcount < s)
		{
			maxcount = s;
			maxnum = a;
		}
	}
	return maxnum;
}

int main()
{
	int A[100][100], m, n;
	cin >> m >> n;
	Input(A, m, n);
	cout << Result(A, m, n) << endl;
	return 0;
}
