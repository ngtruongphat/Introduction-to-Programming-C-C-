#include "stdafx.h"
#include <iostream>
using namespace std;
int demle(int n)
{
	int i = 0;
	while (n != 0)
	{
		if ((n % 10) % 2 == 1)
		{
			i = i + 1;
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
	cout << demle(n);
	return 0;
}

