#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmang(float a[], int &n);
float duongdau(float a[], int n);
int main()
{
	int n;
	float a[100];
	nhapmang(a, n);
	cout << duongdau(a, n);
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
float duongdau(float a[], int n)
{
	float sdd = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i]>0)
		{
			sdd = a[i];
			i = n;
		}
	}
	return sdd;
}
