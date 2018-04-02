#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

const int m = 4; //Change rows
const int n = 3; //Change columms

void in_2d_array(double a[n][m], int, int);
void out_2d_array(double a[n][m], int, int);
void rnd_array(double a[n][m], int, int);

int main() {
	double a[n][m];
	in_2d_array(a, n, m);
	rnd_array(a, n, m);
	out_2d_array(a, n, m);
	return 0;
}

void in_2d_array(double a[n][m], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
}

void out_2d_array(double a[n][m], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

void rnd_array(double a[n][m], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (a[i][j] == static_cast <int> (a[i][j])) {
				a[i][j] += 1;
			}
			else round(a[i][j]);
		}
	}
}