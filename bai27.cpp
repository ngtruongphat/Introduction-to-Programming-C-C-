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
			s = s + 1;
		}
		i = i + 1;
	}
	cout << "So uoc chan la :" << s;
	return 0;
}