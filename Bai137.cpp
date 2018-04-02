#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmang(float a[], int &n);
float vitrinhonhat(float a[], int n);
int main()
{
	int n;
	float a[100];
	nhapmang(a, n);
	cout << vitrinhonhat(a, n);
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
float vitrinhonhat(float a[], int n)
{
	float nn = a[0];
	float vtnn;
	for (int i = 1; i < n; i++)
	{
		if (a[i]<nn)
		{
			vtnn = i;
			nn = a[i];
		}
	}
	return vtnn;
}
