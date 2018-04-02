#include "stdafx.h"
#include <iostream>
using namespace std;
bool kiemtragiam(int n)
{
	int min = 0;
	while (n != 0)
	{
		if (n % 10 >= min)
		{
			min = n % 10;
		}
		else
		{
			return false;
			exit(0);
		}
		n = n / 10;
	}
	return true;

}
int main()
{
	int n;
	cin >> n;
	if (kiemtragiam(n)) cout << "giam dan";
	else cout << "Khong giam dan";
	return 0;
}

