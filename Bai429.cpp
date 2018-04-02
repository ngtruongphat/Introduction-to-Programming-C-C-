#include "stdafx.h"
#include <iostream>
#define MAX 100
using namespace std;

void input_square(int a[][MAX], int& n)
{
	cout << "Enter row/column of a square matrix";
	cin >> n;
	for (int i = 0; i<n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Enter a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

int main()
{
	int a[MAX][MAX], n;
	input_square(a, n);
	system("pause");
	return 0;
}
