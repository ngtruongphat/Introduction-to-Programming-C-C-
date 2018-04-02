// Bai121.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void liet_ke_so_armstrong() {
	for (int i = 1; i <= 1000000; ++i) {
		int dem = log10(i) + 1;
		int s = 0;
		for (int k, a = i; a; a /= 10) {
			k = a % 10;
			s += pow(k, dem);
		}
		if (s == i)
			cout << i << " ";
	}
}

int main()
{
	liet_ke_so_armstrong();
    return 0;
}

