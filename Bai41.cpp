// Bai41.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
float timphanso(int n)
{
	float s = 1;
	for (int i = 1; i <= n; i++)
	{
		s = 1.0 / (1 + s);
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << timphanso(n);
	return 0;
}

