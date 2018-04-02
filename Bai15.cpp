#include "stdafx.h"
#include <iostream>
using namespace std;
float tong(int n)
{
	float s = 0;
	float k = 0;
	for (int i = 1; i <= n; i++)
	{
		k += i;
		s += 1.0 / k;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << tong(n);
	return 0;
}

