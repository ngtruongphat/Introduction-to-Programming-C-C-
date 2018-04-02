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
			cout << "No valid row." << endl;
	} while (row < 1 || row > MAX);


	do
	{
		cout << "Enter column : ";
		cin >> column;
		if (column < 1 || column > MAX)
			cout << "No valid column" << endl;
	} while (column < 1 || column > MAX);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << "Enter a[" << i << "][" << j << "] : ";
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

void matrix_rotate_2(float a[][MAX], int row, int column)
{
	int c[MAX][MAX];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			c[i][j] = a[column - 1 - j][i];
		}
	}
	int d[MAX][MAX];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			d[i][j] = c[column - 1 - j][i];
		}
	}
	int e[MAX][MAX];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			e[i][j] = d[column - 1 - j][i];
			cout << e[i][j] << endl;
		}
	}
}

void matrix_rotate(float a[][MAX], int row, int column)
{
	for (int i = column - 1; i >= 0; i--)
	{
		for (int j = 0; j < row; j++)
			cout << a[i][j] << endl;
	}
}

int main()
{
	float a[MAX][MAX];
	int row, column;
	input(a, row, column);
	output(a, row, column);
	cout << "Matrix after being rotated " << endl;
	matrix_rotate(a, row, column);
	system("pause");
	return 0;
}
