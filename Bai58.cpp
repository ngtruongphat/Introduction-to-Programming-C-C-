#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so nguyen nao do :";
	cin >> n;
	cout << endl;
	while (n >= 1)
	{
		if ((n % 2) == 1)
		{
			cout << "Khong toan so chan";
			n = -1;
		}
		else
		{
			n = n / 10;
		}
	}
	if (n == 0)
	{
		cout << "toan so chan";
	}

	return 0;
}

