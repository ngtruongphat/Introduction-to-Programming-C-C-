// Bai30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
bool sohoanthien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0) s += i;
	}
	if (s == n) return true;
	else return false;
}
int main()
{
	int n;
	cin >> n;
	if (sohoanthien(n)) cout << "OK";
	else cout << "not OK";

}

