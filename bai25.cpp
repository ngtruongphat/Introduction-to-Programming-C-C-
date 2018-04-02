#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Nhap so do : ";
	cin >> x;
	int i = 1;
	int s = 0;
	while (i <= x)
	{
		if ((x%i == 0) && (i % 2 == 0))
		{
			s = s + i;
		}
		i = i + 1;
	}
	cout << "Tong cac uoc so chan la :" << s;

	return 0;
}