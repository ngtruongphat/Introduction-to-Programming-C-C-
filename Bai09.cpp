#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 1;
	int i = 1;
	while (i <= n)
	{
		s = s*i;
		i = i + 1;

	}
	cout << "Tich T la: " << s << endl;
	return 0;
}