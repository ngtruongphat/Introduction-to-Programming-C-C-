// Bai119.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void liet_ke_so_nguyen_to(int n) {
	for (int i = 2; i < n; ++i)
		for (int j = 2; j < n; ++j)
			if (!(i%j))
				if (j < i)
					break;
				else
					cout << i << " ";
}

int main()
{
	int n;
	cin >> n;
	liet_ke_so_nguyen_to(n);
    return 0;
}

