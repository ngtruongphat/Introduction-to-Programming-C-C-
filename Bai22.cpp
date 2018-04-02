#include "stdafx.h"
#include <iostream>
using namespace std;
int tich(int x)
{
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
	return s;
}
int main()
{
	int x;
	cout << "Nhap so do : ";
	cin >> x;
	cout << tich(x);
	return 0;
}