#include "stdafx.h"
#include <iostream>
using namespace std;
int dem(int n)
{
	int i = 0;
	while (n != 0)
	{
		i = i + 1;
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
	cout << dem(n);
	return 0;
}

