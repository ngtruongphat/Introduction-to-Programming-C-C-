#include "stdafx.h"
#include <iostream>
using namespace std;
void inputarray(int a[][50], int n, int m);
int ktht(int a[][50], int n, int m);
int main()
{
	int n, m, a[50][50];
	cin >> n >> m;
	inputarray(a, n, m);
	cout << ktht(a, n, m) << endl;
	return 0;
}
void inputarray(int a[][50], int n, int m)
{

	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
		{
			cout << "a[" << i + 1 << ", " << j + 1 << "] = ";
			cin >> a[i][j];
		}
}
int ktht(int a[][50], int n, int m)
{
	int S = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			int s = 0, k = 2;
			for (; k <= sqrt(a[i][j]); k++)
			{
				if (a[i][j] % k == 0) s = s + k + a[i][j] / k;
				if (k == sqrt(a[i][j]))
				{
					s = s - k;
				}
			}
			if (s + 1 == a[i][j]) S = S + a[i][j];
		}
	return S;
}