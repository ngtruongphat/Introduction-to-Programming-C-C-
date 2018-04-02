
#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
float tong(int x, int n)
{
	float s = 0;
	int k = 0;
	for (int i = 1; i <= n; i++)
	{
		k = k + i;
		s += pow(x, i)*pow(-1, i)*1.0 / k;

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

