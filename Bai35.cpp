#include "stdafx.h"
#include <iostream>
using namespace std;
float tongcan(int n)
{
	float s = 0;
	for (int i = n; i >= 1; i--)
	{
		s = sqrt(s + i);
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

