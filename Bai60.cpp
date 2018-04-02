#include "stdafx.h"
#include <iostream>
using namespace std;
bool kiemtratang(int n)
{
	int max = 10;
	while (n != 0)
	{
		if (n % 10 <= max)
		{
			max = n % 10;
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
	if (kiemtratang(n)) cout << "Tang dan";
	else cout << "Khong tang dan";
	return 0;
}

