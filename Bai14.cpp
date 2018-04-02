#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int tong(int x, int n)
{
	int s = 0;
	for (int i = 0; i <= n; i++)
	{
		s = s + pow(x, (2 * i + 1));
	}
	return s;
}
int main()
{
	int n;
	int x;
	cin >> x;
	cin >> n;
	cout << tong(x,n);
	return 0;
}

