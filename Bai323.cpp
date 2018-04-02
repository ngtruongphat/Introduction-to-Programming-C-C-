#include "stdafx.h"
#include <iostream>
using namespace std;

void array_a_input(double array[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> array[i][j];
}

void array_a_output(double array[][100], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << array[i][j] << ""  "";

		cout << endl;
	}
}

double array_a_times_col(double array[][100], int row, int execute_col)
{
	double times = 1;

	for (int i = 0; i < row; i++)
		times *= array[i][execute_col - 1];

	return times;
}

int main()
{
	double array_a[100][100];
	int row, col, execute_col;
	cin >> row >> col;

	array_a_input(array_a, row, col);
	array_a_output(array_a, row, col);

	cin >> execute_col;
	cout << array_a_times_col(array_a, row, execute_col);
	return 0;
}