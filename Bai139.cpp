#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmang(int a[], int &n);
int vitrihoanthiencuoi(int a[], int n);
int main()
{
	int n;
	int a[100];
	nhapmang(a, n);
	cout << vitrihoanthiencuoi(a, n);
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
int vitrihoanthiencuoi(int a[], int n)
{
	int vthtc = -1;
	for (int i = 0; i < n; i++)
	{
		int s = 0;
		for(int i2=1; i < a[i] ; i2=i2+1) //kiem tra tong uoc co bang chinh no khong
		{
			if (a[i] % i2 == 0)
			{
				s = s + i2;
			}

		}
		if (s == a[i])
		{
			vthtc = i;
		}
	}
	return vthtc;
}
