#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmang(int a[], int &n);
int chancuoi(int a[], int n);
int main()
{
	int n;
	int a[100];
	nhapmang(a, n);
	cout << chancuoi(a, n);
	return 0;
}
void nhapmang(int a[], int &n)
{

	cout << "Nhap so phan tu";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int chancuoi(int a[], int n)
{
	int cc;
	for (int i = 0; i < n; i++)
	{
		if (a[i]%2==0)
		{
			cc = a[i];
		}
	}
	return cc;
}
