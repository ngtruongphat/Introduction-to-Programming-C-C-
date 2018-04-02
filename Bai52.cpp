#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so nguyen nao do :";
	cin >> n;
	cout << endl;
	int i = 9;
	while (n != 0)
	{
		if (i > (n % 10))
		{
			i = n % 10;
		}
		n = n / 10;
	}
	cout << i;
	return 0;
}

