#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 0;
	while (i <= n)
	{
		s+= (float)(2*i+1) / (2*i + 2);
		i = i+1;

	}
	cout << "Tong S la: " << s << endl;
	return 0;
}