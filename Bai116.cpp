// Bai116.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int tong(int n) {
	int s = 0;
	for (int i = 1; i <= n; ++i)
		s += i;
	return s;
}

int main()
{
	int n;
	cin >> n;
	cout << tong(n);
    return 0;
}

