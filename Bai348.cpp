#include "stdafx.h"
#include <iostream>
using namespace std;

void input(double array[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> array[i][j];
}

bool Array_positive(double array[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (array[i][j] > 0)
				return true;
	return false;
}

int main()
{
	double array_set[100][100];
	int row, col;
	cin >> row >> col;
	input(array_set, row, col);
	if (Array_positive(array_set, row, col))
		cout << "True";
	else cout << "False";
	return 0;
}