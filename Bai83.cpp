#include "stdafx.h"0
#include <iostream>
using namespace std;
int kiemtra(float a, float b);
int main()
{
	float a, b;
	cin >> a >> b;
	int s = kiemtra(a, b);
	if (s == 1) cout << "Cung dau";
	if (s == 0) cout << "Khac dau";
	if (s == 2) cout << "Ban da nhap so 0, so 0 la so trung hoa" << endl;
	return 0;
}
int kiemtra(float a, float b)
{
	float k = a*b;
	if (k > 0) return 1;
	if (k < 0) return 0;
	if (k == 0) return 2;
}

