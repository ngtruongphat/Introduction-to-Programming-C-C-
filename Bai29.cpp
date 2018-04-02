#include "stdafx.h"
#include <iostream>
using namespace std;
int uoclelon(int n)
{
	int i = n;
	for (; i > 0; i--)
	{
		if (n%i == 0 && i % 2 == 1)
		{
			cout << i;
			break;
		}
	}
	return i;
}
int main()
{
	int n;
	cin >> n;
	cout << uoclelon(n);
	return 0;
}

