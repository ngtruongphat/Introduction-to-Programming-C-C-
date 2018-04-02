#include "stdafx.h"
#include <iostream>
using namespace std;
void tonguoc(int x) //Bai nay khong co gia tri tra ve
{
	int i = 1;
	while (i <= x)
	{
		if (x%i == 0)
		{
			cout << i << endl;
		}
		i = i + 1;

	}
}
int main()
{
	int x;
	cout << "Nhap so do : ";
	cin >> x;
	tonguoc(x);

	return 0;
}