// Bai111.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void tam_giac_can_dac(int h) {
	int x = 2 * h;
	cout.width(x);
	for (int i = 1, a = 1; i <= h; ++i, a += 2, x -= 2) {
		for (int j = 1; j <= a; ++j)
			cout << "* ";
		cout << endl;
		cout.width(x - 2);
	}
}

void tam_giac_can_rong(int h) {
	int x = 2 * h;
	cout.width(x);
	for (int i = 1, a = 1; i <= h; ++i, a += 2, x -= 2) {
		for (int j = 1; j <= a; ++j) {
			if (i < h)
				if (j == 1 || j == a)
					cout << "* ";
				else
					cout << "  ";		
			else
				cout << "* ";
		}
		cout << endl;
		cout.width(x - 2);
	}
}

void tam_giac_vuong_can_dac(int h) {
	for (int i = 1; i <= h; ++i) {
		for (int j = 1; j <= i; ++j)
			cout << "* ";
		cout << endl;
	}
}

void tam_giac_vuong_can_rong(int h) {
	for (int i = 1; i <= h; ++i) {
		for (int j = 1; j <= i; ++j) {
			if (i > 2 && i < h)
				if (j == 1 || j == i)
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
	char loai_tam_giac;
	int h;
	cout << "Chon loai tam giac a, b, c, d: ";
	cin >> loai_tam_giac;
	cout << "Chon chieu cao h: ";
	cin >> h;
	if (loai_tam_giac == 'a')
		tam_giac_can_dac(h);
	else if (loai_tam_giac == 'b')
		tam_giac_can_rong(h);
	else if (loai_tam_giac == 'c')
		tam_giac_vuong_can_dac(h);
	else
		tam_giac_vuong_can_rong(h);
    return 0;
}

