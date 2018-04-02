#include "stdafx.h"
#include <iostream>
using namespace std;
int tong(int x, int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + pow(-1, (i + 1))*pow(x, i);
	}
	return s;
}
int main()
{
	int x;
	int n;
	cin >> x >> n;
	cout << tong(x, n);
	return 0;
}

