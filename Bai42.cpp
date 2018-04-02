#include "stdafx.h"
#include <iostream>
using namespace std;
int lonnhat(int n)
{
	int s = 0;
	int i = 1;
	for (; s<n; i++)
	{
		s = s + i;
	}
	return s + 1 - i;
}
int main()
{
	int n;
	cin >> n;
	cout << lonnhat(n);
	return 0;
}

