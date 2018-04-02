#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmang(float a[], int &n);
float duongnhonhat(float a[], int n);
int main()
{
	int n;
	float a[100];
	nhapmang(a, n);
	cout << duongnhonhat(a, n);
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
float duongnhonhat(float a[], int n)
{
	float dnn=-1;
	for (int i = 1; i < n; i++) //tim duong dau
	{
		if (a[i] >0)
		{
			dnn = a[i];
			i = n;
		}
	}
	if (dnn == -1)
	{
		return -1;
	}
	else
	{
		for (int i = 1; i < n; i++) //tim duong nho nhat
		{
			if (a[i] < dnn && a[i] > 0)
			{
				dnn = a[i];
			}
		}
	}

	return dnn;
}
