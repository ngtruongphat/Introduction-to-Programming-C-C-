#include "stdafx.h"
#include <iostream>
using namespace std;

void nhap(int a[][100], int &row, int &column) {
	cout << "Enter row ";
	cin >> row;
	cout << "Enter column ";
	cin >> column;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < column; ++j)
			cin >> a[i][j];
}

int sumodd(int a[][100], int row) {
	int target, s = 0;
	cout << "Choose target column ";
	cin >> target;
	for (int i = 0; i < row; ++i)
		if (a[i][target - 1] % 2)
			s += a[i][target - 1];
	return s;
}

int main()
{
	int row, column;
	int a[100][100];
	nhap(a, row, column);
	cout << sumodd(a, row);
	return 0;
}
