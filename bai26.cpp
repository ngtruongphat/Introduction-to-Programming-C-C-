#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so do : ";
	cin >> n;
	int i = 1;
	int s = 1;
	while (i <= n)
	{
		if ((n%i == 0) && (i % 2 == 1))
		{
			s = s*i;
		}
		i = i + 1;
	}
	cout << "Tich cac uoc so le la :" << s <<endl;

	return 0;
}