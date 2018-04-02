// Bai109.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void bang_cuu_chuong() {
	for (int i = 1; i <= 10; ++i) {
		for (int j = 1; j <= 9; ++j)
			cout << j << " x " << i << " = " << j*i << "\t";
		cout << endl;
	}
}

int main()
{
	bang_cuu_chuong();
    return 0;
}

