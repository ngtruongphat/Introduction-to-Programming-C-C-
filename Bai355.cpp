#include "stdafx.h"
#include <iostream>
using namespace std;
const int m = 4; 
const int n = 3; 

void input(double a[][m], int, int);
void output(double a[][m], int, int);
void list_negative_row(double a[][m], int, int);

int main() {
	double a[n][m];
	input(a, n, m);
	list_negative_row(a, n, m);
	return 0;
}

void input(double a[][m], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
}

void output(double a[][m], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

void list_negative_row(double a[][m], int n, int m) {
	for (int i = 0; i < n; ++i) {
		int count = 0;
		for (int j = 0; j < m; ++j) {
			if (a[i][j] < 0) {
				++count;
			}
		}
		if (count == m) {
			cout << i << endl;
		}
	}
}