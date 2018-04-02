// bai01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	cout << "hay nhap n" << endl;
	cin >> int n;
	int s = 0;
	while (i <= n)
	{
		s = s + i;
		i = i + 1;
			
	}
	cout << "Tong S la" << S << endl;
	return 0;
	
}

