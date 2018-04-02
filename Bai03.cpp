#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	double s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (double)1/i;
		i = ++i;

	}
	cout << "Tong S la: " << s << endl;
	return 0;
}