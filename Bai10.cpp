#include "stdafx.h"
#include <iostream>
using namespace std;
int luythua(int x,int n)
{
	int i = 1;
	int t = 1;
	while (i <= n)
	{
		t = t*x;
		i = i + 1;
	}
	return t;
}
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << luythua(x, n);
	return 0;
}