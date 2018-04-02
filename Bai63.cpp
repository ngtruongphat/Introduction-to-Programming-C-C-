#include "stdafx.h"
#include <iostream>
using namespace std;
int bcnn(int a, int b)
{
	int i;
	if (a < b) i = b;
	else i = a;
	while (!((i%a == 0)&(i%b == 0)))
	{
		i++;
	}
	return i;
}
int main()
{
	int a, b;
	cin >> a >> b;
	
	cout << bcnn(a, b);
	return 0;
}

