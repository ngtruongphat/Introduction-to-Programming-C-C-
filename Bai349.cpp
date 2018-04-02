#include "stdafx.h"
#include <iostream>
using namespace std;
int check(int);
int main()
{
	int n, m;
	cin >> m >> n;
	int a[100][100];
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	int t = 0;
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			if (check(a[i][j]) == a[i][j])
			{
				t = 1;
				break;
			}
	if (t == 1) cout << "Co so hoan thien";
	else cout << "khong co so hoan thien";
	system("pause");
}
int check(int x)
{
	int temp = 0;
	for (int j = 1; j < x; j++)
		if (x % j == 0)
			temp = temp + j;
	return temp;
}
