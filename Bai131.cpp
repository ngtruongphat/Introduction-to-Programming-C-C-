#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmang(int a[], int &n);
void xuatmang(int a[], int &n);
int main()
{
	int n;
	int a[100];
	nhapmang(a, n);
	xuatmang(a, n);
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
void xuatmang(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
