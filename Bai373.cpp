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
			cout << array[i][j] << "  ";

		cout << endl;
	}
}

double mincol(double array[][100], int row, int runcol)
{
	double min = array[0][runcol - 1];
	for (int i = 1; i < row; i++)
		if (min > array[i][runcol - 1])
			min = array[i][runcol - 1];

	return min;
}

int main()
{
	double array_phat[100][100];
	int row, col, runcol;
	cin >> row >> col >> runcol;

	input(array_phat, row, col);
	output(array_phat, row, col);

	cout << mincol(array_phat, row, runcol);
	return 0;
}