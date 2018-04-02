#include "stdafx.h"
#include <iostream>
#define MAX 100
using namespace std;

void input(float a[][MAX], int &row, int &column)
{
	
	do
	{
		cout << "Enter row : ";
		cin >> row;
		if (row < 1 || row > MAX)
			cout << "So row khong hop le." << endl;
	} while (row < 1 || row > MAX);

	
	do
	{
		cout << "Enter column : ";
		cin >> column;
		if (column < 1 || column > MAX)
			cout << "So column khong hop le." << endl;
	} while (column < 1 || column > MAX);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
	}
}

void output(float a[][MAX], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			cout << a[i][j] << " ";
	}
	cout << endl;
}

int CheckRowDescend(float a[][MAX], int x, int column)
{
	int flag = 1;
	for (int j = 0; j < column - 1; j++)
	{
		for (int k = j + 1; k < column; k++)
		{
			if (a[x][j] < a[x][k])
			{
				flag = 0;
				break;
			}
		}
	}
	return flag;
}

int KiemTra1columnMaTranCoGiamDan(float a[][MAX], int row, int y)
{
	int flag = 1;
	for (int i = 0; i < row - 1; i++)
	{
		for (int j = i + 1; j < row; j++)
		{
			if (a[i][y] < a[j][y])
			{
				flag = 0;
				break;
			}
		}
	}
	return flag;
}

int CheckDescend(float a[][MAX], int row, int column)
{
	int flag = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (CheckRowDescend(a, i, column) == 0 || KiemTra1columnMaTranCoGiamDan(a, j, row) == 0)
			{
				flag = 0;
				break;
			}
		}
	}
	return flag;
}

int main()
{
	float a[MAX][MAX];
	int row, column;
	input(a, row, column);
	output(a, row, column);
	int flag = CheckDescend(a, row, column);
	if (flag == 1)
		cout << "OK" << endl;
	else
		cout << "NOT OK" << endl;
	system("pause");
	return 0;
}