#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
float tong(int x, int n)
{
	float s = 0;
	float k = 1;
	for (int i = 1; i <= n; i++)
	{
		k *= (float)x / i;
		s += k;
	}
	return s;
}

int main()
{
	int x;
	int n;
	cin >> x;
	cin >> n;
	cout << tong(x, n);
	return 0;
}

