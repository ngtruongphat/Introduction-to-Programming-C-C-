// Bai113.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double sinx(double x) {
	double s = x, t = x, k = 1;
	for (int i = 3, dau = -1; t / k > 1e-5; i += 2, dau = -dau) {
		t *= x*x;
		k *= i*(i - 1);
		s += t / k*dau;
	}
	return s;
}

int main()
{
	double x;
	cin >> x;
	cout << sinx(x);
    return 0;
}

