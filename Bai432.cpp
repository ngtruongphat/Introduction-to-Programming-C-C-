#include "stdafx.h"
#include <iostream>
using namespace std;

void nhap(double a[][100], int &n) {
	cout << "Enter row/column of a square matrix: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> a[i][j];
}

int main()
{
	int n;
	double a[100][100];
	nhap(a, n);
	return 0;
}