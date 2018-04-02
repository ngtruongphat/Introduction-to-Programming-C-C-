#include "stdafx.h"
#include <iostream>
using namespace std;
void input(int a[][50], int n, int m);
int first_finishing_number(int a[][50], int n, int m, int &min);
void min_finishing(int a[][50], int n, int m, int &min);
int sum_divisor(int);

int main()
{
	int n, m, a[50][50];
	int min = 0;
	cin >> n >> m;
	input(a, n, m);
	first_finishing_number(a, n, m, min);
	min_finishing(a, n, m, min);
	return 0;
}
void input(int a[][50], int n, int m)
{

	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
		{
			cout << "a[" << i + 1 << ", " << j + 1 << "] = ";
			cin >> a[i][j];
		}
}
int sum_divisor(int a)
{
	int s = 0;
	for (int k = 2; k <= sqrt(a); k++)
	{
		if (a % k == 0) s = s + k + a / k;
		if (k == sqrt(a)) s = s - k;
	}
	return s + 1;
}
int first_finishing_number(int a[][50], int n, int m, int &min)
{
	min = 2;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if ((sum_divisor(a[i][j]) == a[i][j]))
			{
				min = a[i][j];
				return min;
			}
		}
}
void min_finishing(int a[][50], int n, int m, int &min)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if ((sum_divisor(a[i][j]) == a[i][j]) && (a[i][j] < min))
			{
				min = a[i][j];
				cout << min << endl;
			}
}