#include "stdafx.h"
#include <iostream>
void nhapmatran(int a[][20], int &m, int &n);
int demhoanthien(int a[][20], int &m, int &n, int &sohang);
bool kiemtrahoanthien(int a);
using namespace std;
int main()
{
	int a[20][20];
	int m, n;
	int sohang;
	nhapmatran(a, m, n);
	cout << "Hang ban muon kiem tra";
	cin >> sohang;
	cout << demhoanthien(a, m, n, sohang);
    return 0;
}
void nhapmatran(int a[][20], int &m, int &n)
{
	cout << "Nhap hang";
	cin >> m;
	cout << "Nhap cot";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << i << "/" << j << ": ";
			cin >> a[i][j];
			cout << endl;
		}
	}
}
int demhoanthien(int a[][20], int &m, int &n, int &sohang) // dem so hoan thien tren 1 hang nhat dinh
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemtrahoanthien(a[sohang][i])) s++;
	}
	return s;
}
bool kiemtrahoanthien(int a) //kiem tra so hoan thien
{
	int s = 0;
	for (int i = 1; i < a; i++)
	{
		if (a%i == 0) s += i;
	}
	if (s == a) return true;
	else return false;
}
