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
			cout << "No valid row" << endl;
	} while (row < 1 || row > MAX);

	do
	{
		cout << "Enter column: ";
		cin >> column;
		if (column < 1 || column > MAX)
			cout << "No valid column" << endl;
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

void arr(float a[][MAX], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			cout << a[i][j] << " ";
	}
	cout << endl;
}

int demmin(float a[][MAX], int row, int column)
{
	int dem = 0;
	float min = a[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (a[i][j] == min)
				dem++;
			else if (min > a[i][j])
			{
				min = a[i][j];
				dem = 1;
			}
		}
	}
	return dem;
}

int main()
{
	float a[MAX][MAX];
	int row, column;
	input(a, row, column);
	arr(a, row, column);
	int dem = demmin(a, row, column);
	float min = demmin(a, row, column);
	cout << "Smallest value of arr: " << dem << endl;
	return 0;
}
