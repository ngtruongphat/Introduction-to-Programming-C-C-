// Bai115.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

float diem_tb(float toan, float van) {
	float average = (float)(toan + van) / 2;
	return average;
}

int main()
{
	char hoten[40];
	float toan, van;
	cin >> hoten;
	cin >> toan >> van;
	cout << diem_tb(toan, van);
    return 0;
}

