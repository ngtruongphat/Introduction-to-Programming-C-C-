#include "stdafx.h"
#include <iostream>
using namespace std;
void reverse(float& a, float& b)
{
	float t = a;
	a = b;
	b = t;
}
void result(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
			{
				for (int k = 0; k < m; k++)
				{
					for (int l = 0; l < n; l++)
					{
						if ((a[k][l] < 0) && (a[k][l] > a[i][j]))
							reverse(a[k][l], a[i][j]);
					}
				}

			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
			{
				for (int k = 0; k < m; k++)
				{
					for (int l = 0; l < n; l++)
					{
						if ((a[k][l] > 0) && (a[k][l] < a[i][j]))
							reverse(a[k][l], a[i][j]);
					}
				}

			}
		}
	}

}
int main()
{
	float a[100][100];
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	result(a, m, n);
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
