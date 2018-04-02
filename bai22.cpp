#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Nhap so do : ";
	cin >> x;
	int i = 1;
	int s = 1;
	while (i <= x)
	{
		if (x%i == 0)
		{
			s = s*i;
		}
		i = i + 1;
	}
	cout << "Tong la :" << s;
	return 0;
}