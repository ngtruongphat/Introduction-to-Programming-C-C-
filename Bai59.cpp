// Bai59.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
bool kiemtradoixung(int n)
{
	int k = n;
	int s = 0;
	while (n != 0)
	{
		s = s * 10 + n % 10;
		n = n / 10;
	}
	if (s == k)
	{
		return true;
	}
	else return false;
}
int main()
{
	int n;
	cin >> n;
	if (kiemtradoixung(n)) cout << "doi xung";
	else cout << "khong doi xung";
	return 0;
}

