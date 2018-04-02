#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

bool check_prime(int x)
{
	if (x<2) return false;
	for (int i = 2; i<x; ++i)
		if (x%i == 0) return false;
	return true;
}

int main()
{
	int n, m;
	cout << "Enter n row and m column \n";
	cin >> n >> m;
	int a[100][100], maximum = 0;;
	for (int i = 0; i<n; ++i)
		for (int j = 0; j<m; ++j)
		{
			cin >> a[i][j];
			if (check_prime(a[i][j]) && a[i][j]>maximum) maximum = a[i][j];
		}
	if (maximum == 0) cout << "No prime"; else cout << "Largest prime: " << maximum;
	return 0;
}
