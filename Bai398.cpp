#include "stdafx.h"
#include <iostream>
using namespace std;

void input(double array[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> array[i][j];
}

void output(double array[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << array[i][j] << ""  "";

		cout << endl;
	}
}

void array_right(double array[][100], int row, int col)
{
	double last_col[100];
	for (int i = 0; i < row; i++)
		last_col[i] = array[i][col - 1];
	for (int j = col - 2; j >= 0; j--)
		for (int i = 0; i < row; i++)
			array[i][j + 1] = array[i][j];
	for (int i = 0; i < row; i++)
		array[i][0] = last_col[i];
}

void array_rotate(double array[][100], int row, int col)
{
	double a = array[0][0], b;

	for (int j = 1; j < col; j++)
	{
		b = array[0][j];
		array[0][j] = a;
		a = b;
	}
	for (int i = 1; i < row; i++)
	{
		b = array[i][col - 1];
		array[i][col - 1] = a;
		a = b;
	}
	for (int j = col - 2; j >= 0; j--)
	{
		b = array[row - 1][j];
		array[row - 1][j] = a;
		a = b;
	}
	for (int i = row - 2; i >= 0; i--)
	{
		b = array[i][0];
		array[i][0] = a;
		a = b;
	}
}

int main()
{
	double array_phat[100][100];
	int row, col;
	cin >> row >> col;
	input(array_phat, row, col);
	array_right(array_phat, row, col);
	output(array_phat, row, col);
	array_rotate(array_phat, row, col);
	output(array_phat, row, col);
	return 0;
}