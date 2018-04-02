#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Nhap so do : ";
	cin >> x;
	int i = 1;
	cout << "Cac uoc so le la" << endl;
	while (i <= x)
	{
		if ((x%i == 0) && (i % 2 == 1))
		{
			cout << i << endl;
		}
		i = i + 1;
	}

	return 0;
}