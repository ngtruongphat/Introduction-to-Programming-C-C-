#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int tong(int x, int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += pow(-1, n)*(pow(x, 2 * n));
	}
	return s;
}
int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	cout << tong(x, n);
	return 0;
}

