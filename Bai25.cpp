#include "stdafx.h"
#include <iostream>
using namespace std;
int tonguocchan(int x)
{
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
	return s;
}
int main()
{
	int x;
	cout << "Nhap so do : ";
	cin >> x;
	cout << tonguocchan(x);

	return 0;
}