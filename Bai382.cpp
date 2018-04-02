#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

void nhap(int a[][100], int &row, int &column) {
	cout << "Enter row: ";
	cin >> row;
	cout << "Enter column : ";
	cin >> column;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < column; ++j)
			cin >> a[i][j];
}

int largest_square(int a[][100], int row, int column) {
	int max = 1;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < column; ++j)
			if (sqrt(a[i][j]) == (int)sqrt(a[i][j]))
				if (a[i][j] > max)
					max = a[i][j];
	return max;
}

int main()
{
	int row, column;
	int a[100][100];
	nhap(a, row, column);
	cout << largest_square(a, row, column);
	return 0;
}