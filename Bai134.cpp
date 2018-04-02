#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmang(float a[], int &n);
float solon(float a[],int n);
int main()
{
	int n;
	float a[100];
	nhapmang(a,n);
	cout << solon(a,n);
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
	float max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{ 
			max = a[i];
		}
	}
	return max;
}
