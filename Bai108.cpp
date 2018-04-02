// Bai108.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double luy_thua(double x, double y) {
	double s = pow(x, y);
	return s;
}

int main()
{
	double x, y;
	cin >> x >> y;
	cout << luy_thua(x, y);
    return 0;
}

