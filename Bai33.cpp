#include "stdafx.h"
#include <iostream>
using namespace std;
float tongcan(int n)
{

	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = sqrt(s + 2);
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

