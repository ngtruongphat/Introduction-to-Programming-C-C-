// Bai112.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void chu_nhat_dac(int a, int b) {
	for (int i = 1; i <= b; ++i) {
		for (int j = 1; j <= a; ++j)
			cout << "* ";
		cout << endl;
	}
}

void chu_nhat_rong(int a, int b) {
	for (int i = 1; i <= b; ++i) {
		for (int j = 1; j <= a; ++j) {
			if (i > 1 && i < b)
				if (j == 1 || j == a)
					cout << "* ";
				else
					cout << "  ";
			else
				cout << "* ";
		}
		cout << endl;
	}
}

int main()
{
	char loai_chu_nhat;
	int a, b;
	cout << "Chon loai chu nhat a, b: ";
	cin >> loai_chu_nhat;
	cout << "Chon chieu dai va chieu rong: ";
	cin >> a >> b;
	if (loai_chu_nhat == 'a')
		chu_nhat_dac(a, b);
	else
		chu_nhat_rong(a, b);
    return 0;
}

