// Bai70.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int gthua(int n)
{
	int s = 1;
	for (int i = 0; i <= n; i++)
	{
		s = s*i;
	}
	return s;
}
float tong(int x, int n)
{
	float s = 1;

	for (int i = 0; i <= n; i++)
	{

		s += pow(x, 2 * i + 1)*pow(-1, i + 1)*1.0 / gthua(2 * i + 1);

	}
	return s;
}
int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	cout << tong(x,n);
	return 0;
}

