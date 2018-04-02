// Bai75.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
bool check(int n);
using namespace std;


int main()
{
	int n;
	cin >> n;
	if (check(n)) cout << "co";
	else cout << "Khong";
	return 0;
}

bool check(int n)
{
	while (n % 2 == 0)
	{
		n /= 2;
	}
	if (n != 1) return false;
	else return true;
}