#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;
const int m = 4; 
const int n = 3; 
void input(double a[n][m], int, int);
void output(double a[n][m], int, int);
void swap_array(double a[n][m], int, int);

int main() {
	double a[n][m];
	input(a, n, m);
	swap_array(a, n, m);
	output(a, n, m);
	return 0;
}

void input(double a[n][m], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
}

void output(double a[n][m], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

void swap_array(double a[n][m], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < (m / 2); ++j) {
			swap(a[i][j], a[i][m - 1]);
		}
	}
}