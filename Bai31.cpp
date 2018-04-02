#include "stdafx.h"
#include <iostream>
using namespace std;
bool songuyento(int n)
{
	int i = 2;
	if (n < 2) return false;
	if (n == 2) return true;
	if (n > 2)
	{
		if (n % 2 == 0) return false;
		else
		{
			for (; i < n; i++)
			{
				if (n%i == 0)
				{
				 return false;
					break;
				}
			}

		}
	}
	if (i = n - 1 && i != 2) return true;
}
int main()
{
	int n;
	cin >> n;
	if (songuyento(n)) cout << "OK";
	else cout << "not OK";
	return 0;
}

