#include "stdafx.h"
#include <iostream>
using namespace std;
void giaibac2(int a, int b, int c)
{
	int dt = b*b - 4 * a*c;
	if (dt < 0) cout << "vo nghiem";
	if (dt == 0)
	{
		cout << "nghiem kep" << (float)-b / (2 * a);
	}
	if (dt > 0)
	{
		cout << "hai nghiem phan biet" << endl << "{" << (float)(-b - sqrt(dt)) / 2 * a << ";" << (float)(-b + sqrt(dt)) / 2 * a << "}";
	}
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	giaibac2(a, b, c);
	return 0;
}

