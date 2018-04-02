#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
bool sohoanthien(int a);
void nhapmatran(int a[][20], int &m, int &n);
int shttrendong(int a[][20], int k, int n);
void xuatdong(int a[][20], int k, int n);

int main()
{
	int a[20][20],manghoanthien[20], m, n;
	int dem = 0;
	nhapmatran(a, m, n);
	for (int i = 0; i < m; i++)
	{
		if (shttrendong(a, i, n) > dem)
		{
			dem = 0;
			manghoanthien[dem] = i;
			dem++;
		}
		else
		{
			if (shttrendong(a, i, n) == dem)
			{
				manghoanthien[dem] = i;
				dem++;
			}

		}
		
	}
	;
	for (int i = 0; i <= dem; i++)
	{
		xuatdong(a,manghoanthien[i], n);
	}

	return 0;
}
void nhapmatran(int a[][20], int &m, int &n)
{
	cout << "Nhap hang: ";
    cin >> m;
	cout << "Nhap cot";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << i << "/" << j << " ";
			cin >> a[i][j];
		}
	}

}
bool sohoanthien(int a)
{
	int s = 0;
	for (int i = 1; i < sqrt(a); i++)
	{
		if (a%i == 0) s += i;
	}
	if (s == a) return true;
	else return false;
}
int shttrendong(int a[][20], int k, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (sohoanthien(a[k][i])) dem++;
	}
	return dem;
}

void xuatdong(int a[][20], int k, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[k][i] << " ";
	}
	cout << endl;
}
