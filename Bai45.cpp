#include "stdafx.h"
#include <iostream>
using namespace std;
int tichso(int n)
{
	int i = 1;
	while (n != 0)
	{
		i = i*(n % 10);
		n = n / 10;
	}
	return i;
}
int main()
{
	int n;
	cout << "Nhap so nguyen nao do :";
	cin >> n;
	cout << tichso(n);
	return 0;
}

