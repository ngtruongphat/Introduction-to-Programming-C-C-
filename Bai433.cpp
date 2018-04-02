#include "stdafx.h"
#include<iostream>
using namespace std;
void input(int a[], int n);
void arrange(int a[], int n);

int main()
{
	int a[50], n, m;
	cin >> n >> m;
	input(a, n);
	arrange(a, n);
	return 0;
}
void input(int a[], int n)
{

	for (int i = 0; i<n; i++)
	{
		cout << "a[" << i + 1 << "] = ";
		cin >> a[i];
	}
}
void arrange(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[j] > a[i])
			{
				int x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
	for (int k = 0; k < n; k++) cout << a[k];
}