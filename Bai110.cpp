// Bai110.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int cac_phuong_an_rut_tien(int n) {
	int n1, n2, dem = 0;
	for (int i = 0; i <= (n / 5000); ++i) {
		n1 = n - i * 5000;
		for (int j = 0; j <= (n1 / 2000); ++j) {
			n2 = n1 - j * 2000;
			if (!(n2 % 1000))
				++dem;
		}
	}
	return dem;
}

int main()
{
	int n;
	cin >> n;
	cout << cac_phuong_an_rut_tien(n);
    return 0;
}

