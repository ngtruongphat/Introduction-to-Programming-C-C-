#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmatran(int a[][20], int &m, int &n);
void xuatmatran(int a[][20], int &m, int &n);

int main()
{
   int a[20][20];
   int m, n;
   nhapmatran(a, m, n);
   xuatmatran(a, m, n);
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
			cout << i << "/" << j << ":";
			cin >> a[i][j];
			cout << endl;
		}
	}
}
void xuatmatran(int a[][20], int &m, int &n)
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
