#include "stdafx.h"
#include <iostream>
using namespace std;
int tong(int n)
{
	int k = 1;
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		k *= i;
		s += k;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << tong(n);
	return 0;
}

