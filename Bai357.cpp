#include "stdafx.h"
#include <iostream>
using namespace std;

void nhap(int a[][100], int &row, int &column) {
	cout << "Enter row : ";
	cin >> row;
	cout << "Enter column : ";
	cin >> column;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < column; ++j)
			cin >> a[i][j];
}

void list_row_prime(int a[][100], int row, int column) {
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < column; ++j) {
			int jump = 0, k = 2;
			for (; k <= a[i][j]; ++k) {
				if (a[i][j] == k) {
					for (int h = 0; h < column; ++h)
						cout << a[i][h] << " ";
					cout << endl;
					jump = 1;
				}
				else if (a[i][j] % k == 0)
					break;
			}
			if (jump)
				break;
		}
}

int main()
{
	int row, column;
	int a[100][100];
	nhap(a, row, column);
	list_row_prime(a, row, column);
	return 0;
}