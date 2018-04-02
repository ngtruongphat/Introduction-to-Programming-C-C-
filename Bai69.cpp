#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int tong(int x, int n)
{
	float s = 0;
	for (int i = 0; i <= n; i++)
	{
		s += pow(-1, n)*pow(x, 2 * n + 1);
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

