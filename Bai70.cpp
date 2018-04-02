// Bai70.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
float tong(int n)
{
	float s = 0;
	int k = 0;
	for (int i = 1; i <= n; i++)
	{
		k = k + i;
		s += pow(-1, i + 1)*1.0 / k;

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

