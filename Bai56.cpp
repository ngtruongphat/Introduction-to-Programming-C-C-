#include "stdafx.h"
#include <iostream>
using namespace std;
bool kiemtrale(int n)
{
	while (n >= 1)
	{
		if ((n % 2) == 0)
		{
			return false;
			n = -1;
		}
		else
		{
			n = n / 10;
		}
	}
	if (n == 0)
	{
	    return true;
	}
}

int main()
{
	int n;
	cout << "Nhap so nguyen nao do :";
	cin >> n;
	cout << endl;
	if (kiemtrale(n)) cout << "Toan le";
	else cout << "Khong toan le";
	return 0;
}

