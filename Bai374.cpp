#include "stdafx.h"
#include <iostream>
using namespace std;
bool check_prime(int x);
int main()
{
	int n, m;
	cin >> m >> n;
	int a[100][100];
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			if (check_prime(a[i][j]) == true)
			{
				cout << "First prime: " << a[i][j];

				system("pause");
				return 0;
			}

}
bool check_prime(int x)
{
	if (x == 2)
		return true;

	if (x < 2)
		return false;
	if (x > 2)
	{
		bool check = true;
		for (int j = 2; j < x; j++)
			if (x % j == 0)
			{
				check = false;
				break;
			}
		return check;
	}
}