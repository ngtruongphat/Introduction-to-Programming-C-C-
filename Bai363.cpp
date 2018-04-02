#include "stdafx.h"
#include "stdafx.h"
#include<iostream>
using namespace std;
int output(int a[][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << "   ";
		cout << endl;
	}
	return 0;
}
int input(int a[][100], int n, int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	return 0;
}
void List_column_ascend(int a[][100], int dong, int cot)
{
	int i, j, x;
	for (j = 0; j < cot; j++)
	{
		for (x = 1, i = 0; i < dong - 1; i++)
		{
			if (a[i][j] > a[i + 1][j])
			{
				x = 0;
				break;
			}

		}
		if (x == 1)
		{
			cout << j + 1;
		}
	}
}

int main()
{
	int a[100][100];
	int n, m;
	cin >> n >> m;
	input(a, n, m);
	output(a, n, m);
	List_column_ascend(a, n, m);
	system("pause");
	return 0;
}