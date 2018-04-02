#include "stdafx.h"
#include <iostream>
using namespace std;
int tichle(int n)
{
	int i = 1;
	while (n != 0)
	{
		if ((n % 10) % 2 == 1)
		{
			i = i*(n % 10);
		}
		n = n / 10;
	}
	return i;
}
int main()
{
	int n;
	cout << "Nhap so nguyen nao do :";
	cin >> n;
	cout << endl;
	cout << tichle(n);
	return 0;
}

