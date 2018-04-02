#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> m >> n;
	int a[100][100];
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int i = 1; i <= m; i++)
	{
		int t = 1;
		for (int j = 1; j <= n; j++)
			t = t*a[i][j];
		cout << "Tich la: " << i << " : " << t << endl;
	}
	system("pause");

}