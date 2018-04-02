// Bai117.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int tong(float x, int n) {
	int s = 0, t = 1;
	for (int i = 1; i <= n; ++i) {
		t *= x;
		s += t;
	}
	return s;
}

int main()
{
	float x;
	int n;
	cin >> x >> n;
	cout << tong(x, n);
    return 0;
}

