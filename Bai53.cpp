#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so nguyen nao do :";
	cin >> n;
	cout << endl;
	int solon = -1;
	int  dem = 1;
	while (n != 0)
	{
		if (solon < (n % 10))
		{
			solon = n % 10;
			dem = 1;
		}
		
		else
		{
			if (solon == (n % 10))
			{
				dem = dem + 1;
			}
			
		}
		n = n / 10;
	}

	cout << dem;
	return 0;
}

