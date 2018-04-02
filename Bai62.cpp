#include "stdafx.h"
#include <iostream>
using namespace std;
int ucln(int a, int b)
{
	int i;
	if (a < b) i = a;
	else i = b;
	while (!((a%i == 0)&(b%i == 0)))
	{
		i--;
	}
	return i;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << ucln(a, b);
	return 0;
}

