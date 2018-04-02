#include "stdafx.h"
#include <iostream>
using namespace std;
int tong(int x, int n)
{
	int s = 0;
	int k = 1;
	for (int i = 1; i <= n; i++)
	{
		k *= x;
		s = s + k;
	}
	return s;
}
int main()
{
	int n;
	int x;
	cin >> x;
	cin >> n;
    cout << tong(x, n);
	return 0;
}

