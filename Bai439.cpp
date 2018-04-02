#include "stdafx.h"
#include <iostream>
using namespace std;
void hienmatran(int a[][20], int m, int n);
void nhapmatran(int a[][20], int &m, int &n);
int tongtamgiacduoi(int a[][20], int m, int n);

int main()
{
	int a[20][20], m, n;
	nhapmatran(a, m, n);
	hienmatran(a, m, n);
	cout << "Tong tam giac duoi : " << tongtamgiacduoi(a, m, n);
	return 0;
}
void hienmatran(int a[][20], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

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
int tongtamgiacduoi(int a[][20], int m, int n)
{
	int s = 0;
	for (int i = 1,bo=0; i < m; i++,bo++)
	{	
	      {
			for (int j = 0; j <= bo; j++)
				{
					s += a[i][j];
				}
			}
		}

	
	return s;
}
