// Bai18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
int gt(int n);
using namespace std;
float tong(int x, int n)
{
	float s = 1;
	for (int i = 0; i <= n; i++)
	{
		s += pow(x, 2 * i + 1) / (float)gt(2 * i + 1);
	}
	return s;
}
int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
    cout << tong (x,n);
	return 0;
}
int gt(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}

