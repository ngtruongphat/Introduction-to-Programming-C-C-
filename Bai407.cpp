#include "stdafx.h"
#include <iostream>
using namespace std;

void input(double a[][100], int &row, int &column) {
	cout << "Enter row : ";
	cin >> row;
	cout << "Enter column ";
	cin >> column;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < column; ++j)
			cin >> a[i][j];
}

void output(double a[][100], int row, int column) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void arrange_row_ascend(double a[][100], int row, int column) {
	int target;
	cout << "Row to arrange : ";
	cin >> target;
	for (int j = 0; j < column; ++j)
		for (int k = j + 1; k < column; ++k)
			if (a[target - 1][j] > a[target - 1][k]) {
				double t = a[target - 1][j];
				a[target - 1][j] = a[target - 1][k];
				a[target - 1][k] = t;
			}
}

int main()
{
	int row, column;
	double a[100][100];
	input(a, row, column);
	arrange_row_ascend(a, row, column);
	output(a, row, column);
	return 0;
}