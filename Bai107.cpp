// Bai107.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double can_bac_n(double x, int n) {
	double s = pow(x, 1. / n);
	return s;
}

int main()
{
	double x;
	int n;
	cin >> x >> n;
	cout << can_bac_n(x, n);
    return 0;
}

