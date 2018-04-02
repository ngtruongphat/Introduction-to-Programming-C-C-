// Bai120.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void liet_ke_so_chinh_phuong(int n) {
	int s = 1;
	for (int i = 3; s < n && n > 4; i += 2) {
		s += i;
		if (s < n)
			cout << s << " ";
	}
}

int main()
{
	int n;
	cin >> n;
	liet_ke_so_chinh_phuong(n);
    return 0;
}

