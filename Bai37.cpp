#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
float tongcan(int n)
{
	float s = 0;
	for (int i = 2; i <= n; i++)
	{
		s = pow(s + i, 1.0 / i);
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << tongcan(n);
	return 0;
}

