#include <stdafx.h>
#include <iostream>
#include <math.h>
using namespace std;
float tongcan(int x, int n)
{
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = pow(s + pow(x, i), 1.0 / 2);
	}
	return s;
}
int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	cout << tongcan(x, n);
	return 0;
}

