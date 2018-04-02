#include "stdafx.h"
#include <iostream>
using namespace std;
void nhapmatran(int a[][20], int &m, int &n);
bool matranbangnhau(int a[][20], int m1, int n1, int b[][20], int m2, int n2);
bool matrancon(int a[][20], int m1, int n1, int b[][20], int m2, int n2);

int main()
{
	int a[20][20], b[20][20];
	int m1, n1, m2, n2;
	cout << "MA TRAN A" << endl;
	nhapmatran(a, m1, n1);
	cout << "MA TRAN B" << endl;
	nhapmatran(b, m2, n2);
	if (matrancon(a, m1, n1, b, m2, n2)) cout << "La ma tran con";
	else "Khong ma tran con";
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

bool matrancon(int a[][20], int m1, int n1, int b[][20], int m2, int n2)
{
	int c[20][20]; //ma tran kiem tra
	if ((m1 == m2 - 1) && (n1 == n2 - 1))
	{
		for (int bohang = 0; bohang < m2; bohang++)
		{
			for (int bocot = 0; bocot < n2; bocot++)
			{
				for (int i1 = 0; i1 < m1; i1++)
				{
					for (int j1=0; j1 < n1; j1++)
					{
						for (int i2 = 0; i2 < m2; i2++)
						{
							for (int j2 = 0; j2 < n2; j2++)
							{
								if ((i2 != bohang) || (j2 != bocot))
									c[i1][j1] == b[i2][j2];
							}
						}
					}
				}
			}
			if (matranbangnhau(c, m1, n1, a, m1, n1)) return true;
			else return false;
		}
	}
	else return false;

}
bool matranbangnhau(int a[][20], int m1, int n1, int b[][20], int m2, int n2)
{
	int flag = 1;
	if ((m1 == m2) && (n1 == n2))
	{
		for (int i = 0; i < m1; i++)
		{
			for (int j = 0; j < n1; i++)
			{
				if (a[i][j] != b[i][j]) flag = 0;
			}
		}
		if (flag) return true;
		else return false;
	}
	else return false;
}