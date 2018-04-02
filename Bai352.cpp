#include "stdafx.h"
#include <iostream>
using namespace std;
int a[1000][1000];
bool check(int x, int m)
{
	for (int i = 1; i<m; ++i)
		if (a[x][i]<a[x][i - 1]) return false;
	return true;
}

int main()
{
	int n, m;
	cout << "Enter n rows and m columns \n";
	cin >> n >> m;

	for (int i = 0; i<n; ++i)
		for (int j = 0; j<m; ++j)
			cin >> a[i][j];
	int x = 0;
	while (x<1 || x>n)
	{
		cout << "Enter row: ";
		cin >> x;
	}
	if (check(x, m)) cout << "row ascends"; else cout << "row descends";
	return 0;
}
