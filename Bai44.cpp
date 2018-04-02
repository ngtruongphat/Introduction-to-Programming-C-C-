#include "stdafx.h"
#include <iostream>
using namespace std;
int tongso(int n)
{
	int i = 0;
	while (n != 0)
	{
		i = i + (n % 10);
		n = n / 10;
	}
	return i;
}
int main()
{
	int n;
	cout << "Nhap so nguyen nao do :";
	cin >> n;
	cout << tongso(n);
	return 0;
}

