#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so nguyen nao do :";
	cin >> n;
	int so = n;
	cout << endl;
	int sodautien;
	int dem=0;
	while (n > 9)
	{
		n = n / 10;
	}
	sodautien = n;
	while (so != 0)
	{
		if (so % 10 == sodautien)
		{
			dem = dem + 1;
		}
		so = so / 10;
	}
	cout << dem;
	return 0;

}

