#include "stdafx.h"
#include <iostream>
using namespace std;
void hienmatran(int a[][20], int m,int n);
void nhapmatran(int a[][20], int &m, int &n);
void sapxepmang(int a[][20], int m, int n);
int main()
{
	int a[20][20], m, n;
	nhapmatran(a, m, n);
	sapxepmang(a, m, n);
	hienmatran(a, m, n);
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
void hienmatran(int a[][20], int m,int n)
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
void sapxepmang(int a[][20], int m, int n)
{
	for (int j = 0; j < n; j++)
	{
		if (j % 2 == 0)
		{
			for(int dem=0;dem<m;dem++)
			{
				for (int i = 0; i < (m - 1); i++)
				{
					if (a[i][j] < a[i + 1][j])
					{
						int temp;
						temp = a[i][j];
						a[i][j] = a[i + 1][j];
						a[i + 1][j] = temp;
					}
				}
			}
		}
		
		   else
		{
			
			   for (int dem = 0; dem < m; dem++)
			   {
				   for (int i = 0; i < (m - 1); i++)
				   {
					   if (a[i][j] > a[i + 1][j])
					   {
						   int temp;
						   temp = a[i][j];
						   a[i][j] = a[i + 1][j];
						   a[i + 1][j] = temp;
					   }
				   }
			   }
		}
	}
}

