#include "stdafx.h"
#include <iostream>
using namespace std;
int tongchan(int n)
{
	int i = 0;
	while (n != 0)
	{
		if ((n % 10) % 2 == 0)
		{
			i = i + n % 10;
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
	cout << tongchan(n);
	return 0;
}

