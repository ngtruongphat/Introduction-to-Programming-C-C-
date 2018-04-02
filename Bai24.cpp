#include "stdafx.h"
#include <iostream>
using namespace std;
void lietkeuoc(int x) // Bai nay khong co gia tri tra ve
{
	int i = 1;
	cout << "Cac uoc so le la" << endl;
	while (i <= x)
	{
		if ((x%i == 0) && (i % 2 == 1))
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
	lietkeuoc(x);
	return 0;
}