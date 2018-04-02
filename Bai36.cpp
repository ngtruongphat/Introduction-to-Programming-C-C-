// Bai36.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int gt(int a);
float tongcan(int n)
{
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = sqrt(gt(i) + s);
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
int gt(int a)
{
	int s = 1;
	for (int i = 1; i <= a; i++)
	{
		s = s*i;
	}
	return s;
}

