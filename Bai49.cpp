#include "stdafx.h"
#include <iostream>
using namespace std;
int sodau(int n)
{
	while (n > 9)
	{
		n = n / 10;
	}
	return n;
}
int main()
{
	int n;
	cout << "Nhap so nguyen nao do :";
	cin >> n;
	cout << endl;
	cout << sodau(n);
	return 0;
}

