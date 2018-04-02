#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cout << "Enter n rows and m columms : \n";
	cin >> n >> m;
	int a[100][100];
	for (int i = 0; i<n; ++i)
		for (int j = 0; j<m; ++j)
			cin >> a[i][j];
	int s = 0;
	for (int i = 0; i<n; ++i) s += a[i][0] + a[i][m - 1];
	for (int i = 1; i<m - 1; ++i) s += a[0][i] + a[n - 1][i];
	cout << s;
	return 0;
}