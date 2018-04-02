#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmang(int a[], int &n);
int vitrichandau(int a[], int n);
int main()
{
	int n;
	int a[100];
	nhapmang(a, n);
	cout << vitrichandau(a, n);
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
int vitrichandau(int a[], int n)
{
	int vtcd=;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			vtcd =i;
			i = n;
		}
	}
	return vtcd;
}
