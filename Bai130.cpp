#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmang(float a[], int &n);
void xuatmang(float a[], int &n);
float main()
{
	int n;
	float a[100];
	nhapmang(a, n);
	xuatmang(a, n);
	return 0;
}
void nhapmang(float a[], int &n)
{

	cout << "Nhap so phan tu";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void xuatmang(float a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
