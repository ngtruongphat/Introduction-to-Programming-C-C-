#include "stdafx.h"
#include <iostream>
using namespace std;

const int m = 4; 
const int n = 3; 

void input(long a[][m], int, int);
long min_even(long a[][m], int, int);
int count_array(long a[][m], int, int);

int main() {
	long a[n][m];
	input(a, n, m);
	cout << count_array(a, n, m);
	return 0;
}

void input(long a[][m], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
}

long min_even(long a[][m], int n, int m) {
	long min = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (a[i][j] % 2 == 0 && a[i][j] < min) {
				min = a[i][j];
			}
		}
	}
	return min;
}

int count_array(long a[][m], int n, int m) {
	long min = min_even(a, n, m);
	int count = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (a[i][j] == min) {
				++count;
			}
		}
	}
	return count;
}