#include "stdafx.h"0
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	cout << max(a, max(b, c));
	return 0;
}

